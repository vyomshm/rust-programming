#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int n;
	cin >> n;
	// bool found = false;

	int arr[] = {40, 50, 70, 90, 2 ,33, -14, 61};

	for(int i = 0; i < 8; i++){
		if(arr[i] == n){
			// found = true;
			cout << i << endl;
			// break;
			return 0;
		}
	}

	// if(!found){
	// 	cout << "element not present in array" << endl;
	// }
	cout << -1;
}