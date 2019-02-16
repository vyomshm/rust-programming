#include <iostream>
using namespace std;

// complete triangle - diagonal traversal
int main(int argc, char** argv){
	int arr[4][4] = {
		{11,12,13,14},
		{21,22,23,24},
		{31,32,33,34},
		{41,42,43,44}
	};

	int dim = sizeof(arr) / sizeof(arr[0]);

	for(int gap = -dim + 1; gap < dim; gap++){
		int i = (gap < 0)? -gap : 0;
		int j = (gap < 0)? 0 : gap;
		while(i < dim && j < dim){
			cout << arr[i][j] << " ";
			i++;
			j++;
		}
	}
	cout << endl;
}