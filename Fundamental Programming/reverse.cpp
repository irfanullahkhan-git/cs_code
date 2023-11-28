#include <iostream>
using namespace std;

int main() {	
	int num;
	int reverse = 0;
	cout<<"Please enter a number.\n";
	cin>>num;
	
	while(num >0){
		reverse = reverse * 10 + (num % 10);
		num = num / 10;
	}
	
	cout<<"Reverse: "<<reverse;
	
	return 0;
}

