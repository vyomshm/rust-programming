#include <iostream>
using namespace std;

const int sz = 10;

// wrong fun
// int* wfun() {
// 	int arr[sz];
// 	// static int arr[sz];

// 	for(int i = 0; i < sz; i++){
// 		arr[i] = i;
// 	}
// 	return arr;
// }

int* dfun() {
	int* arr = new int[sz];

	for(int i = 0; i < sz; i++){
		arr[i] = i;
	}
	return arr;
}

int main() {
	// int* p = wfun();
	// cout << p << endl;
	// for(int i = 0; i < sz; i++){
	// 	cout << *(p+i) << endl;
	// }
	// *p = 100;
	// cout << *p << endl;

	int* ptr = dfun();

	cout << sizeof(ptr) << endl;
	for(int i = 0; i < sz; i++){
		cout << *(ptr + i) << endl;
	}

}