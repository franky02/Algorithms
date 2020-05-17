#include<bits/stdc++.h>
#include<climits>
using namespace std;

//highly inefficient algo - O(n^3)
//three loops - naive approach
void max_Subarray_sum1(int* a, int n) {
	int max_sum = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			int current_sum = 0;
			for(int k = i; k <= j; k++) {
				current_sum += a[k];
			}
			max_sum = max(max_sum,current_sum);
		}
	}
	cout << "Max sum : " << max_sum << endl;
}

//cummulative sum array approach
//O(n^2)
void max_Subarray_sum2(int* a, int n) {
	int max_sum = 0;
	int current_sum = 0;
	int csum[1000] = {0};
	for(int i = 1; i < n; i++) {
		csum[i] = csum[i-1] + a[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			current_sum = 0;			
			current_sum = csum[j] - csum[i-1];
			max_sum = max(max_sum,current_sum);
		}
		
	}
	cout << "Max sum : " << max_sum << endl;
}

//kadane's Algorithm - O(n)
void max_Subarray_sum3(int* a, int n) {
	int max_sum = 0;
	int current_sum = 0;
	for(int i = 0; i < n; i++) {
		current_sum += a[i];
		if(current_sum < 0){
			current_sum = 0;
		}
		max_sum = max(max_sum,current_sum);	
	}
	cout << "Max sum : " << max_sum << endl;
}

int main() {
	int n;
	int a[1000] = {0};
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	max_Subarray_sum3(a, n);
}

