#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int arr[] = {2, 5, 7, 9, 1, 3};
	int n = sizeof(arr) / sizeof(arr[0]);

	int start = 1;
	int end = n - 2;

	int dummy;
	while(start <= end){
		dummy = arr[start];
		arr[start] = arr[end];
		arr[end] = dummy;

		start+=1;
		end-=1;
	}

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}