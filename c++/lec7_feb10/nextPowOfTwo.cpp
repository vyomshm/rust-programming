#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int n;
	cin >> n;

	int val = 1;

	while(val < n){
		val = (val<<1);
	}

	cout << val << endl;
}