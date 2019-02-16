#include <iostream>
using namespace std;

int main(int arc, char** argv){
	int arr[4][4] = {
		{0,0,1,0},
		{1,0,0,0},
		{0,0,0,0},
		{1,0,0,0}
	};

	int rows = sizeof(arr) / sizeof(arr[0]);
	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

	bool exited = false;

	int i = 0;
	int j = 0;

	int dir = 1;

	while(!exited){
		if(dir == 1){
			if(i == rows || j == cols){
				exited = true;
			} else if(arr[i][j] == 1){
				dir++;
				i++;
			} else{
				j++;
			}
		} else if(dir == 2){
			if(i == rows || j == cols){
				exited = true;
			} else if(arr[i][j] == 1){
				dir++;
				j--;
			} else{
				i++;
			}
		} else if(dir == 3) {
			if(i == rows || j == cols){
				exited = true;
			} else if(arr[i][j] == 1){
				dir++;
				i--;
			} else{
				j--;
			}
		} else if(dir == 4){
			if(i == rows || j == cols){
				exited = true;
			} else if(arr[i][j] == 1){
				dir = 1;
				j++;
			} else{
				i--;
			}
		} else {
			cout << "Fail" << endl;
			return 0;
		}
	}

	if(dir == 1){
		j--;
	} else if(dir == 2) {
		i--;
	} else if(dir == 3) {
		j++;
	} else if( dir == 4){
		i++;
	} else {
		cout << "error" << endl;
	}

	cout << i << " " << j << endl;
}