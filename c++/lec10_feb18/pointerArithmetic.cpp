#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int i = 10;
	short int j = 20;
	long long int k = 30;

	int *p1 = &i;
	short int *p2 = &j;
	long long int *p3 = &k;

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;

	cout << endl;

	p1++;
	p2++;
	p3++;

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;

	cout << endl;

	int *p11 = p1 + 1;
	short int *p22 = p2 + 1;
	long long int *p33 = p3 + 1;

	cout << p11 << endl;
	cout << p22 << endl;
	cout << p33 << endl;

	cout << endl;

	cout << p11 - p1 << endl;
	cout << p22 - p2 << endl;
	cout << p33 - p3 << endl;

	cout << endl;

	cout << (char*)p11 - (char*)p1 << endl;
	cout << (char*)p22 - (char*)p2 << endl;
	cout << (char*)p33 - (char*)p3 << endl;

}