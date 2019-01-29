#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;

	cout << "Please  Enter a number :";
	cin >> n;

	for(int i = 2; i <= n; i++){
		bool isIPrime = true;
		int div = 2;
		while(div * div <= i){
			if(i % div == 0){
				isIPrime = false;
				break;
			}
			div++;
		}

		if(isIPrime == true){
			cout << i << "\t";
		}
	}
	cout << endl;
}