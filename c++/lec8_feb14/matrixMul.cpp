#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	int arr1[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	int arr2[3][2] = {
		{11,12},
		{21,22},
		{31,32}
	};

	int r1 = sizeof(arr1) / sizeof(arr1[0]);
	int c1 = sizeof(arr1[0]) / sizeof(arr1[0][0]);

	int r2 = sizeof(arr2) / sizeof(arr2[0]);
	int c2 = sizeof(arr2[0]) / sizeof(arr2[0][0]);

	// code

	int res[r1][c2];

	for(int i=0; i < r1; i++){
		for(int j=0; j < c2; j++){
			res[i][j] = 0;
			for(int k=0; k < c1; k++){
				res[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}

	for(int i=0; i < r1; i++){
		for(int j=0; j < c2; j++){
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}