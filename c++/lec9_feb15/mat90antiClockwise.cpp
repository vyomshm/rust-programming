#include <iostream>
using namespace std;

void reverse(int arr[], int left, int right);
void swap(int arr[], int left, int right);

int main(int argc, char** argv){
	int arr[4][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11},
		{12,13,14,15}
	};

	int rows = sizeof(arr) / sizeof(arr[0]);
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

	for(int i = 0; i < rows; i++){
		for(int j = i; j < cols; j++){			
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}

	for(int i = 0; i < rows / 2; i++){
		int temp[rows];
		// swap rows
	}

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void reverse(int arr[], int left, int right){
	while(left < right){
		swap(arr, left, right);
		right--;
		left++;
	}
};

void swap(int arr[], int left, int right){
	int dummy = arr[left];
	arr[left] = arr[right];
	arr[right] = dummy;
}