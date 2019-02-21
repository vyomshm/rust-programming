#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int i = 10;
	int* ptr = &i;
	int** q = &ptr;

	cout << ptr << endl;
	cout << *ptr << endl;

	cout << q << endl;
	cout << *q << endl;
	cout << **q << endl;
}