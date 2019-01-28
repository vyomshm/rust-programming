#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int n;
	int div = 3;

	cout << "Please enter a number :";
	cin >> n;

	if(n < 2 || (n % 2 == 0 && n!=2)) {
		cout << "Not prime" << endl;
		return 0;
	}

	while(div * div <= n){
		if(n % div == 0){
			cout << "Not prime" << endl;
			return 0;
		}
		div += 2;
	}
	cout << "Prime" << endl;
	return 0;
}