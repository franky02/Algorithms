#include<iostream>
using namespace std;
//Rain water trapping problem

//O(n^2) approach
int maxWater(int* a,int n){
	int result = 0;
	for(int i = 1; i < n-1; i++){
		//max left
		int left = a[i];
		for(int j = 0; j < i; j++){
			left = max(left,a[j]);
		}
		//max right
		int right = a[i];
		for(int j = i+1; j < n; j++){
			right = max(right,a[j]);
		}
		//max water
		result += (min(left,right)-a[i]);
	}
	return result;
}

//O(n) - memoization

int maxWaterMemo(int* a,int n){
	int left[n];
	int right[n];
	int water_stored = 0;

	left[0] = a[0];
	for(int i = 1; i < n; i++){
		left[i] = max(left[i-1],a[i]);
	}

	right[n-1] = a[n-1];
	for(int i = n-2; i >= 0; i--){
		right[i] = max(right[i+1],a[i]);
	} 

	for(int i = 0; i < n; i++){
		water_stored += (min(left[i],right[i])-a[i]);
	}
	return water_stored;
}

int main(){
	int n;
	cin >> n;
	int a[100];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	cout << maxWaterMemo(a,n) << endl;
	return 0;
}
