#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b)  {
	cout << "comparing " << a << " and " << b << endl;
	return a > b;
}

void bubbleSort(int* a, int n, bool(&cmp)(int a, int b)) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(cmp(a[i],a[j])) {
                swap(a[i],a[j]);
            }
        }
    }
}

int main() {
	int a[1000];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bubbleSort(a, n, compare);
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

}