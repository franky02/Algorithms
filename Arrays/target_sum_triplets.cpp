#include<iostream>
#include<algorithm>
using namespace std;

//Two pointer - O(n^2 + n*logn) ~ O(n^2) solution
void targetSumTriplets(int* a,int n,int sum){
	sort(a,a+n);
	for(int i = 0; i < n; i++){
		int j = i+1;
		int k = n-1;
		while(j < k){
			int current_sum = a[i]+a[j]+a[k];
			if(current_sum < sum){
				j++;
			}else if(current_sum > sum){
				k--;
			}else{
				cout << a[i] << ", " << a[j] << " and " << a[k] << endl;
				j++;
				k--;
			}
		}
	}
}

int main(){
	int n,target;
	cin >> n;
	int a[1000] = {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> target;

	targetSumTriplets(a,n,target);

	return 0;
}