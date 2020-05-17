#include<bits/stdc++.h>
using namespace std;
//Given a sorted array, find the pair of elements that sum upto K

//O(n)
void pairsum(int* a, int n, int sum) {
	int i = 0;
	int j = n-1;
	while(i < j) {
		int current_sum = a[i]+a[j];
		if(current_sum < sum) {
			i++;
		}else if(current_sum > sum) {
			j--;
		}else{
			cout << a[i] << "," << a[j] << endl;
			i++;
			j--; 
		}
	}
}

int main() {
	int a[] = {1,3,5,7,10,11,12,13};
	int n = sizeof(a)/sizeof(a[0]);
	int sum = 16;
	pairsum(a,n,sum);

}