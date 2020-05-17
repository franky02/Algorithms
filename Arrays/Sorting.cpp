#include<bits/stdc++.h>
using namespace std;

void selectionSort(int* a, int n) {
    for(int i = 0; i < n; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(a[minIndex] > a[j]) {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }
}

void bubbleSort(int* a, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(a[i] > a[j]) {
                swap(a[i],a[j]);
            }
        }
    }
}

void insertionSort(int* a, int n) {
    for(int i = 1; i < n; i++) {
        int j = i-1;
        int e = a[i];
        while(j >= 0 && a[j] > e) {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = e;
    }
}

//comparator function
bool compare(int a, int b) {
    return a > b;
}


int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, compare);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    delete [] a;
}