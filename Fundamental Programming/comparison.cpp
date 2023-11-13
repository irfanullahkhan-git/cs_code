#include <iostream>
using namespace std;

int main() {	

	// Comparison Operators
	// > < >= <= == !=
	
	int num1, num2;
	cout<<"Please enter first number\n";
	cin>>num1;
	cout<<"Please enter second number\n";
	cin>>num2;
	
	if(num1 < num2){
		cout<<"First Number is smaller than Second Number";
	}else{
		
		if(num1 == num2){
			cout<<"Both numbers are equal";	
		}else{
			cout<<"Second number is smaller than First Number";	
		}
	}
	
	return 0;
}

