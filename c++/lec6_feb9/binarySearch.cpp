#include<iostream>
#include <climits>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin >> n;

	int arr[] = {1, 5, 6, 7, 45, 95, 100, 122, 3435};

	int low = 0;
	int high = (sizeof(arr) / sizeof(arr[0]));

	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] == n){
			cout << mid << endl;
			return 0;
		} else if(n > arr[mid]){
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}

	cout << -1 << endl;
} 