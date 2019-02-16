#include<iostream>
using namespace std;

// pattern
//1
//3*2
//4*5*6
//10*9*8*7
//11*12*13*14*15
int main(int argc, char** argv) {
	int n;
	cin >> n;

	int pow = 1;
	int stars = 0;
	int count = 1;

	for(int i = 1; i <= n; i++) {
		int safe = stars;
		int safe_count;
		if(pow < 0){
			count = count + i - 1;
			safe_count = count+1;
		}
		for(int j = i; j > 0; j--){
			if(pow > 0){
				cout << count;
				count++;
			} else {
				cout << count;
				count--;
			}
			if(stars > 0){
				cout << "*";
				stars--;
			}
		}
		if(pow < 0){
			count = safe_count;
		}
		cout << endl;
		stars = safe;
		stars++;
		pow*=-1;
	}
}