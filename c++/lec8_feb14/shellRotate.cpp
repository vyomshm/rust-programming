#include <iostream>
using namespace std;

void reverse(int arr[], int left, int right);
void swap(int arr[], int left, int right);
void rotate(int arr[], int n, int r);

int main(int argc, char** argv){
	int arr[5][5] = {
		{11,12,13,14,15},
		{21,22,23,24,25},
		{31,32,33,34,35},
		{41,42,43,44,45},
		{51,52,53,54,55}
	};
	int rows = sizeof(arr) / sizeof(arr[0]);
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

	int s, r;
	cin >> s >> r;

	int minRow = 0 + (s - 1);
	int maxRow = rows - 1 - (s - 1);
	int minCol = 0 + (s - 1);
	int maxCol = cols - 1 - (s - 1);

	int nElems = 2 * ((maxRow - minRow) + (maxCol - minCol));
	int res[nElems];
	int counter = 0;

	while(counter < nElems){
		for(int i = minRow; i < maxRow; i++){
			// cout << arr[i][minCol] << " ";
			res[counter] = arr[i][minCol];
			counter++;
		}

		for(int i = minCol; i < maxCol; i++){
			// cout << arr[maxRow][i] << " ";
			res[counter] = arr[maxRow][i];
			counter++;
		}

		for(int i = maxRow; i >= minRow; i--){
			// cout << arr[i][maxCol] << " ";
			res[counter] = arr[i][maxCol];
			counter++;
		}

		for(int i = maxCol - 1; i > minCol; i--){
			// cout << arr[minRow][i] << " ";
			res[counter] = arr[minRow][i];
			counter++;
		}
	}

	rotate(res, nElems, r);

	for(int i = 0; i < nElems; i++){
		cout << res[i] << " ";
	}

	counter = 0;
	cout << endl;
	cout << endl;

	while(counter < nElems){
		for(int i = minRow; i < maxRow; i++){
			// cout << arr[i][minCol] << " ";
			arr[i][minCol] = res[counter];
			counter++;
		}

		for(int i = minCol; i < maxCol; i++){
			// cout << arr[maxRow][i] << " ";
			arr[maxRow][i] = res[counter];
			counter++;
		}

		for(int i = maxRow; i >= minRow; i--){
			// cout << arr[i][maxCol] << " ";
			arr[i][maxCol] = res[counter];
			counter++;
		}

		for(int i = maxCol - 1; i > minCol; i--){
			// cout << arr[minRow][i] << " ";
			arr[minRow][i] = res[counter];
			counter++;
		}
	}

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}


void rotate(int arr[], int n, int r){
	reverse(arr, 0, n-1);
	reverse(arr, 0, r-1);
	reverse(arr, r, n-1);
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