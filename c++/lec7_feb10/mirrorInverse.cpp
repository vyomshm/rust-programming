#include <iostream>
using namespace std;

// check if arr is mirror inverse of itself
int main(int argc, char** argv){
	int arr[] = {2, 3, 0, 1, 4};
	int n = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0; i < n; i++){
		if(i != arr[arr[i]]){
			cout << i;
			cout << "false" << endl;
			return 0;
		}
	}
	cout << "true" << endl;
}