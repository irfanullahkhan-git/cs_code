#include <iostream>
using namespace std;

int main() {	
	int num;
	int actual_number;
	int reverse = 0;
	cout<<"Please enter a number.\n";
	cin>>num;
	actual_number = num;
	
	while(num >0){
		reverse = reverse * 10 + (num % 10);
		num = num / 10;
	}
	
	if(reverse == actual_number){
		cout<<actual_number<<" is a Palindrome.";
	}else{
		cout<<actual_number<<" is not a Palindrome";
	}	
	return 0;
}

