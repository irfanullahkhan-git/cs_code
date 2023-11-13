#include <iostream>
using namespace std;

int main() {	
	int input;
	int remainder;
	
	cout<<"Please enter a number\n";
	cin>> input;
	remainder = input % 2;
	
	if(remainder == 0){
		cout<<input<<" is an Even number";
	}
	
	if(remainder == 1){
		cout<<input<<" is an Odd number";
	}
	return 0;
}

