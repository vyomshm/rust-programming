#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int n1, n2;
	int rem;

	cout << "Enter 2 Numbers :\n";
	cin >> n1 >> n2;

	while(n1 % n2 != 0){
		rem = n1 % n2;
		n1 = n2;
		n2 = rem;
	}
	cout << n2 << " is the GCD" << endl;
}