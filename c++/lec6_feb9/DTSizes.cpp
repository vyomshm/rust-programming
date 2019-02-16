#include<iostream>
#include <climits>
using namespace std;

int main(int argc, char** argv){
	cout << "char" << endl;
	cout << sizeof(char) << endl;
	cout << CHAR_MIN << endl;
	cout << CHAR_MAX << endl;

	cout << sizeof(unsigned char) << endl;
	cout << UCHAR_MAX << endl;

	cout << sizeof(short) << endl;
	cout << SHRT_MIN << endl;
	cout << SHRT_MAX << endl;

	cout << sizeof(int) << endl;
	cout << INT_MIN << endl;
	cout << INT_MAX << endl;

	cout << sizeof(long) << endl;
	cout << LONG_MIN << endl;
	cout << LONG_MAX << endl;

	cout << sizeof(long long) << endl;
	cout << LLONG_MIN << endl;
	cout << LLONG_MAX << endl;
}