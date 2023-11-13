#include <iostream>
using namespace std;

int main() {	

	// Arthematic Operators
	// + - * / %
	
	// Logic Operators
	// && ||
	
	// Comparison Operators
	// > < >= <= == !=
	
	int input;
	int remainder;
	
	cout<<"Please enter a number\n";
	cin>> input;
	remainder = input % 2;
	
	if(remainder != 0){
		cout<<input<<" is an Odd number";
	}else{
		cout<<input<<" is an Even number";	
	}
	
	return 0;
}

