#include <iostream>
using namespace std;

int main() {	
	
	int num;
	int temp = 0;
	cout<<"Please enter a number\n";
	cin>>num;
	
	for(int index = num; index > 1; index--){
		if(num % index == 0){
			temp++;
		}
	}
	if(temp > 1){
		cout<<num<<" is not a Prime Number";
	}else{
		cout<<num<<" is a Prime number.";
	}
	return 0;
}

