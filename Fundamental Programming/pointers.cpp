#include <iostream>
using namespace std;

int main() {	
	int num1 = 30;
	int num2 = 40;
	int * ptr = &num1;
	int * ptr2 = &num1;
	ptr = &num2;
	ptr2 = &num1;
	num1 = num1 + num2 + *ptr + *ptr2;
	*ptr = 20;
	
	cout<<num2 * *ptr;
	return 0;
}

