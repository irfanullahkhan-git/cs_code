#include <iostream>
using namespace std;
// Find all factors of a given number.

int main() {	
	int num;
	cout<<"Please enter a number.\n";
	cin>>num;
	
	for(int index = num; index >= 1; index--){
		if(num % index == 0){
			cout<<index<<endl;
		}
	}
		
	return 0;
}

