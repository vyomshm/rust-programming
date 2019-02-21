#include <iostream>
using namespace std;

// static 

void sfun();
void nfun();

int main(int argc, char** argv) {
	for(int i = 0; i < 5; i++){
		nfun();
	}

	cout << endl;

	for(int i = 0; i < 5; i++){
		sfun();
	}
}

void sfun(){
	static int y = 20;
	y++;
	cout << y << " ";
}

void nfun(){
	int y = 20;
	y++;
	cout << y << " ";
}