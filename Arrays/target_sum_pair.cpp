#include<iostream>
#include<algorithm>
using namespace std;

//Unsorted array - approach 1 - O(n*logn)
void targetSumPair1(int* a,int n,int sum){
	sort(a,a+n);
	int i = 0;
	int j = n-1;
	while(i < j) {
		int current_sum = a[i]+a[j];
		if(current_sum < sum) {
			i++;
		}else if(current_sum > sum) {
			j--;
		}else{
			cout << a[i] << " and " << a[j] << endl;
			i++;
			j--; 
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

	targetSumPair1(a,n,target);

}