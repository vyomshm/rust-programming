#include <iostream>
using namespace std;

int main(int argc, char** argv){
	int n, k, j;
	cout << "Enter a number and rotation value : \n";
	cin >> n >> k;

	j = n;
	int len = 0;
	while(j > 0){
		j = j / 10;
		len++;
	}
	// cout << "len: " << len << endl;
	
	k = k % len;
	k = k < 0 ? k+len : k;
	// cout << "effective rotation value: " << k << endl;

	int m = 1;
	int d = 1;
	for(int i = 1; i <= len; i++){
		if(i <= k){
			d = d*10;
		} else {
			m = m*10;
		}
	}

	int q = n / d;
	int r = n % d;

	cout << (r * m)+q << endl;
}