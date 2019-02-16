#include <iostream>
#include <bits/stdc++>
using namespace std;

int main(int argc, char** argv){
	int arr[] = {1,46, 2, 5, 6,6 ,6 ,667, 78 ,9};

	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + n);

	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
}