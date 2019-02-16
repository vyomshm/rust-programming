#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	int num;
	int count = 0;
	cin >> num;

	while(num != 0) {
		int rsb = num & (-num);
		num -= rsb;
		count++;
	}

	cout << count << endl;
}
