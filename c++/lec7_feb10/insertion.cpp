#include <iostream>
using namespace std;

void swap(int arr[], int i, int j);

int main(int argc, char** argv){
	int arr[] = {3, 6, 90, 8, 56, 45};
	int n = sizeof(arr) / sizeof(int);

	for(int jc = 1; jc < n; jc++){
		for(int i = jc; i > 0; i--){
			if(arr[i-1] > arr[i]){
				swap(arr, i-1, i);
			}
		}
	}

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	cout << endl;
}

void swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}