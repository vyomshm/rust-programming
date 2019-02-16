#include<iostream>
#include <climits>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;

	int arr[] = {10, 20, 20, 20, 20, 30, 30, 30, 40, 50, 50, 50};

	int low = 0;
	int high = sizeof(arr) / sizeof(arr[0]) - 1;

	int first = -1;

	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] == n){
			first = mid;
			high = mid - 1;
		} else if(n > arr[mid]){
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	cout << first << endl;
} 