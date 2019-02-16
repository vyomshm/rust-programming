#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int arr[] = {2, 3, 5, 2, 6, 3, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	int unique = 0;

	for(int i = 0; i< n; i++){
		unique ^= arr[i];
	}

	cout << unique << endl;
}