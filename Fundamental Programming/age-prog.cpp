#include <iostream>
using namespace std;

int main() {	
	int age;
	cout<<"Please enter your age.\n";
	cin>>age;

	if(age < 16 && age > 12){
		cout<<"Congratulations! you are eligible for selection.";
	}else{
		cout<<"Sorry you are not eligible for this selection.";
	}
	
	return 0;
}

