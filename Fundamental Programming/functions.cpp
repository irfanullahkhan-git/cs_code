#include <iostream>
using namespace std;

void PrintAddition(int n1, int n2){
	int result = n1 + n2;
	cout<<"The sum of "<<n1<<" and "<<n2<<" is "<<result<<endl;
	return ;
}

int main() {	
	int num1, num2;
	cout<<"Please enter two numbers\n";
	cin>>num1>>num2;
	
	PrintAddition(num2, num1);	
	
	int num3 = 40;
	int num4 = 60;
	PrintAddition(num3, num4);
	
	int num5 = 25;
	int num6 = 30;
	PrintAddition(num5, num6);
	
 	return 0;
}

