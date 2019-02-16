#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int arr[] = {2,4,5,8};
	int n = sizeof(arr) / sizeof(n);

	for(int i = 0; i < (1<<n); i++){
		for(int b = n-1, j=0; b >= 0; b--, j++){
			int bm = 1 << b;
			if((i & bm) == bm){
				cout << arr[j];
			} else {
				cout << "*";
			}
		}

		cout << endl;
	}
}