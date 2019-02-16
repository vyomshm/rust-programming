#include <iostream>
using namespace std;

void swap(int arr[], int i, int j);

int main(int argc, char** argv){
	int arr[] = {3, 6, 7, 8, 946, 56};
	int n = sizeof(arr) / sizeof(arr[0]);

	for(int jc = 1; jc <= n; jc++){
		for(int i = 0; i < n - jc; i++){
			if(arr[i] > arr[i+1]){
				swap(arr, i, i+1);
			}
		}
	}

	for(int j = 0; j < n; j++){
		cout << arr[j] << " ";
	}

	cout << endl;
}

void swap(int arr[], int i, int j){
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}