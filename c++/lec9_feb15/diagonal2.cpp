#include <iostream>
using namespace std;

// lower triangle
int main(int argc, char** argv){
	int arr[4][4] = {
		{11,12,13,14},
		{21,22,23,24},
		{31,32,33,34},
		{41,42,43,44}
	};

	int dim = sizeof(arr) / sizeof(arr[0]);

	// for(int gap = 0; gap > -dim; gap--){
	// 	for(int i = -gap, j = i + gap; i < dim ; i++, j++){
	// 		cout << arr[i][j] << "\t";
	// 	}
	// }

	for(int gap = 0; gap > -dim; gap--){
		for(int j = 0, i = -gap; i < dim ; i++, j++){
			cout << arr[i][j] << "\t";
		}
	}
	cout << endl;
}