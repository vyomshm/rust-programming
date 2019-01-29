#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int n;

	cout << "Enter a number :";
	cin >> n;

	while(n > 0){
		int rem = n % 10;
		cout << rem;
		n = n / 10;
	}
	cout << endl;
}