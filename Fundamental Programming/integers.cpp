#include <iostream>
using namespace std;

int main() {
	int num1 = 10;
	int num2 = 20;
	int result = num1 + num2;
	
	result = num1 + num2;
	
	num1 = num2;

	num1 = num2 + num2 + num1;
	num2 = num1 + 10;
	num1 = num2 - num1 + result;
	
	num1++; // 41
	num1++; // 42
		
	cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<result;
	
	return 0;
}

