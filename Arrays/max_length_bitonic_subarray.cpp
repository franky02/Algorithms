#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n;
	cin >> n;
    int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	//inreasing subarray length at i 
	int inc[n];
	//decreasing subarray length at i 
	int dec[n];
	int res[n];

	inc[0] = 1;
	for(int i = 1; i < n; i++){
		if(a[i] >= a[i-1]){
			inc[i] = inc[i-1] + 1;
		}else{
			inc[i] = 1;
		}
	}

    dec[n-1] = 1;
	for(int i = n-2; i >= 0; i--){
		if(a[i] >= a[i+1]){
			dec[i] = dec[i+1] + 1;
		}else{
			dec[i] = 1;
		}
	}

	for(int i = 0; i < n; i++){
		res[i] = inc[i]+dec[i]-1;
	}
	//max element of the res array
    cout << *max_element(res,res+n); 

	
}
	
