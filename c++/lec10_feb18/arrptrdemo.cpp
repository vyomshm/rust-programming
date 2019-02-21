#include <iostream>
using namespace std;

// array and pointers // 
// ptr incremented by size of base datatype
int main(int argc, char** argv) {
	int arr[4] = {1,2,3,4};

	int* p1 = arr;
	int* p2 = &arr[0];
	int (*p3)[4] = &arr;

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;

	p1++;
	p2++;
	p3++;

	cout << endl;

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;

	cout << &arr << " " << &arr + 1 << " " << (&arr + 1) - &arr << endl;
}