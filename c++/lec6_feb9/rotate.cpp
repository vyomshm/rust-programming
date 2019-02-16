#include <iostream>
using namespace std;

void reverse(int arr[], int left, int right);
void swap(int arr[], int left, int right);

int main(int argc, char** argv){
	int arr[] = {2, 5, 7, 9, 1, 3};
	int n = sizeof(arr) / sizeof(arr[0]);

	int r;
	cin >> r;

	reverse(arr, 0, n-1);
	reverse(arr, 0, r-1);
	reverse(arr, r, n-1);

	for(int i = 0; i< n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void reverse(int arr[], int left, int right){
	while(left < right){
		swap(arr, left, right);
		left++;
		right--;
	}
}

void swap(int arr[], int left, int right){
	int temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;
}