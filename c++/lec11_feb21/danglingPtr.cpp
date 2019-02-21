#include <iostream>
using namespace std

int* fun() {
	int x = 10;
	return &x;
}

int main(int argc, char** argv){
	// memory leak
	int* p = new int[5];
	cout << p << endl;
	p = new int[10];
	cout << p << endl;

	//dangling pointers
	int* ptr = new int[5];
	cout << ptr << endl;
	delete[] ptr;
	cout << ptr << endl;

	//null pointer
	ptr = NULL;
	// usage
	if(ptr != NULL) {
		cout << "Null ptr usage" << endl;
	}

	// wild pointer
	int* x;
}