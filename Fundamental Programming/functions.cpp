#include <iostream>
using namespace std;

// Functions in C++;
int Sum(int n1, int n2){
	int sum = n1 + n2;
	return sum;
}

int Subtract(int n1, int n2){
	int result = n1 - n2;
	return result;
}

int main() {	
 int num1, num2;
 int total;
 cout<<"Please enter Two digits\n";
 cin>>num1>>num2;
 
 total = Sum(num1, num2);
 cout<<"Sum of the numbers "<<total<<endl;	

 total = Subtract(num1, num2);
 cout<<"Difference of the numbers "<<total<<endl;
 
 return 0;
}

