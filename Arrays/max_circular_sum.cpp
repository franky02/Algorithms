#include<iostream>
#include<climits>
using namespace std;

//-2, -5, 6, -2, -3, 1, 5, -6
int maxCircularSubarraySum(int* a,int n){
	int max_in_total = INT_MIN;
	int min_in_total = INT_MAX;
	int max_till_here = 0;
	int min_till_here = 0;
	int sum = 0;

	for(int i = 0; i < n; i++){
		//find max sum contiguous subarray
		if(max_till_here + a[i] > a[i]){
			max_till_here += a[i];
		}else{
			max_till_here = a[i];
		}
		max_in_total = max(max_till_here,max_in_total);

		//find min sum contiguous subarray
		if(min_till_here + a[i] < a[i]){
			min_till_here += a[i];
		}else{
			min_till_here = a[i];
		}
		min_in_total = min(min_till_here,min_in_total);

		//find sum of all elements;
		sum += a[i];
	}

	if(sum == min_in_total){
		return max_in_total;
	}else{
		return max(max_in_total, sum-(min_in_total));
	}
}


int main(){
	int n;
	int a[10000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << maxCircularSubarraySum(a,n) << endl;
}