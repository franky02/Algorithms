#include<iostream>
using namespace std; 

int firstOccurence(int* a,int n,int key){
    int s = 0;
    int e = n-1;
    int res = -1;
    while(s <= e){
        int mid = (s+e)/2;
        if(key == a[mid]){
            res = mid;
            e = mid-1;
        }else if(key > a[mid]){
            s = mid+1;
        }else if(key < a[mid]){
            e = mid-1;
        }else{
            res = -1;
        }
    }
    return res;
}

int lastOccurence(int* a,int n,int key){
    int s = 0;
    int e = n-1;
    int res = -1;
    while(s <= e){
        int mid = (s+e)/2;
        if(key == a[mid]){
            res = mid;
            s = mid+1;
        }else if(key > a[mid]){
            s = mid+1;
        }else if(key < a[mid]){
            e = mid-1;
        }else{
            res = -1;
        }
    }
    return res;
}


int main(){
    int a[] = {1,2,5,8,8,8,8,8,10,12,15,20};
    int n = sizeof(a)/sizeof(a[0]);
    
    int key;
    cin >> key;

    if(lastOccurence(a,n,key) == -1 || firstOccurence(a,n,key) == -1){
        cout << "Element Not present" << endl;
    }else{
       cout << 1+lastOccurence(a,n,key)-firstOccurence(a,n,key) << endl;
    }

}