#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	int num;

	cin >> num;

	// bm = num & ((~num) + 1);
	bm = num & (-num);
	cout << bm << endl;
}