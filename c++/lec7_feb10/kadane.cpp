#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int arr[] = {2,3,7,-9,6,7,-20,1,2,3};
	int n = sizeof(arr) / sizeof(arr[0]);

	int sum = 0;
	int start = 0;
	int end = 0;

	int l_sum = 0;
	int l_start = 0;
	int l_end = 0;

	for(int i = 0; i < n; i++){
		if(arr[i] < arr[i] + l_sum){
			l_sum += arr[i];
			l_end = i;
		} else {
			l_sum = arr[i];
			l_start = i;
			l_end = i;
		}

		if(l_sum > sum) {
			sum = l_sum;
			start = l_start;
			end = l_end;
		}
	}

	cout << sum << endl;
	cout << start << endl;
	cout << end << endl;
}