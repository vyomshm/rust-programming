#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int arr[3][5] = {
		{11,12,13,14,15},
		{21,22,23,24,25},
		{31,32,33,34,35}
	};

	int rows = sizeof(arr) / sizeof(arr[0]);
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

	// m-1
	for(int j = 0; j < cols; j++){
		if(j % 2 == 0){
			for(int i = 0; i <rows; i++){
				cout << arr[i][j] << " ";
			}
		} else {
			for(int i = rows - 1; i >=0; i--){
				cout << arr[i][j] << " ";
			}
		}
	}
	cout << endl;

	// m-2
	// TO-DO
}