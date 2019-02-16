#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int arr[3][5] = {
		{11,12,13,14,15},
		{21,22,23,24,25},
		{31,32,33,34,35}
	};

	int rows = sizeof(arr) / sizeof(arr[0]);
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

	int count = 0;

	int minRow = 0;
	int maxRow = rows;
	int minCol = 0;
	int maxCol = cols;

	while(count < rows*cols){
		for(int i = minRow; i <  maxRow && count < rows*cols; i++){
			cout << arr[i][minCol] << " ";
			count++;
		}

		for(int i = (minCol + 1); i <  maxCol && count < rows*cols; i++){
			cout << arr[maxRow-1][i] << " ";
			count++;
		}

		for(int i = (maxRow - 2); i >= minRow && count < rows*cols; i--){
			cout << arr[i][maxCol-1] << " ";
			count++;
		}

		for(int i = (maxCol - 2); i >  minCol && count < rows*cols; i--){
			cout << arr[minRow][i] << " ";
			count++;
		}

		minCol++;
		maxCol--;
		minRow++;
		maxRow--;
	}

	cout << endl;

}