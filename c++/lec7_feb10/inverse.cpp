#include <iostream>
using namespace std;

// get mirror inverse of an array
int main(int argc, char** argv){
	int arr[] = {4, 2, 0, 1, 3};
	int n = sizeof(arr) / sizeof(arr[0]);

	int inv[n];

	for(int i = 0; i < n; i++){
		inv[arr[i]] = i;
	}

	for(int i = 0; i < n; i++){
		cout << inv[i] << " ";
	}
	cout << endl;
}