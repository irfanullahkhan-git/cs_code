#include <iostream>
using namespace std;

int main() {	
	
	int num;
	int factorial = 1 ;
	cout<<"Please enter a number.\n";
	cin>>num;
	
	// Method:1 1x2x3x4x5 = 120
	//	for(int index=1; index <= num; index++){
	//		factorial = factorial * index;
	//	}

	// Method:2 5x4x3x2x1 = 120
	for(int index = num; index >= 1; index--){
		factorial = factorial * index;
	}
		
	cout<<"Factorial of "<<num<<" is "<<factorial;
	
	return 0;
}

