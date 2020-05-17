#include<iostream>
#include<climits>
using namespace std;

bool linearSearch(int* a, int n, int key) {
    int i = 0;
    while(i < n) {
        if(a[i] == key) {
            return true;
            break;
        }
        i++;
    }
    if(i == n) {
        return false;
    }   
}

int binarySearch(int* a, int n, int key) {
    int start = 0;
    int end = n - 1;
    while(start <= end) {
        int mid = (start + end)/2;
        if(a[mid] == key) {
            return mid;
        }
        else if(a[mid] > key) {
            end = mid - 1;
        }else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, key;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> key;
    cout << binarySearch(a, n, key);

    return 0;
}