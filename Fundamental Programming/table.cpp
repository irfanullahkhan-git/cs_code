#include <iostream>
using namespace std;

int main() {	
	int table;
	cout<<"Please enter a number\n";
	cin>>table;
	
	for(int index = 1; index <= 16; index++){
		cout<< table <<" x "<< index << " = " << table * index << endl;
	}
	
	return 0;
}

