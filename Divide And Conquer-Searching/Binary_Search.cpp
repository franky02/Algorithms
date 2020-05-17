#include<iostream>
using namespace std;

//searching in a sorted array in O(logn)

int binarySearchIterative(int* a,int n,int key){
    int s = 0;
    int e = n-1;
    while(s <= e){
        int mid = (s+e)/2;
        if(key == a[mid]){
            return mid;
        }else if(key > a[mid]){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return -1;
}

int binarySearchRecursive(int* a,int n,int s,int e,int key){
    int mid = (s+e)/2;
    if(key == a[mid]){
        return mid;
    }else if(key > a[mid]){
        return binarySearchRecursive(a,n,mid+1,e,key);
    }else if(key < a[mid]){
        return binarySearchRecursive(a,n,s,mid-1,key);
    }else{
        return -1;
    }
}


int main(){
    int n,key;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> key;
    //cout << binarySearchIterative(a,n,key) << endl;
    cout << binarySearchRecursive(a,n,0,n-1,key);


}