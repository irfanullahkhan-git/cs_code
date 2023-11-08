#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	int sum, difference, product, division, remainder, average;
	
	cout<<"Please enter first number.\n";
	cin>>num1;
	
	cout<<"Please enter second number.\n";
	cin>>num2;
	
	// Sum of two numbers
	sum = num1 + num2;
	cout<<"The Jama of "<<num1<<" and "<<num2<<" is "<<sum<<endl; 
	
	//Difference of two numbers
	difference = num2 - num1;
	cout<<"The Tafreeq of "<<num1<<" and "<<num2<<" is "<<difference<<endl;
	

	//Product of two numbers
	product = num2 * num1;
	cout<<"The Zarab of "<<num1<<" and "<<num2<<" is "<<product<<endl;

	//Divisio of two numbers
	division = num2 / num1;
	cout<<"The Taqseem of "<<num1<<" and "<<num2<<" is "<<division<<endl;
	
	// Remainder of two numbers
	
	
	//Divisio of two numbers
	remainder = num2 % num1;
	cout<<"The Remainder of "<<num1<<" and "<<num2<<" is "<<remainder<<endl;
		
	return 0;
}

