#include <iostream>
using namespace std;

int main() {	
//	int i1, i2, i3, i4, i5, i6, i7,i8, i9, i10;
//	cout<<"Please enter number\n";
//	cin>>i1;
//	cout<<"Please enter number\n";
//	cin>>i2;
//	cout<<"Please enter number\n";
//	cin>>i3;
//	cout<<"Please enter number\n";
//	cin>>i4;
//	cout<<"Please enter number\n";
//	cin>>i5;
//	cout<<"Please enter number\n";
//	cin>>i6;
//	cout<<"Please enter number\n";
//	cin>>i7;
//	cout<<"Please enter number\n";
//	cin>>i8;
//	cout<<"Please enter number\n";
//	cin>>i9;
//	cout<<"Please enter number\n";
//	cin>>i10;

//	 int length = 5; // Static Array Size
	 int length;
	 cout<<"Please enter array size\n";
	 cin>>length;
	 int numbers[length];
	 
	 for(int index = 0; index < length; index++){
		cout<<"Please enter number\n";
		cin>>numbers[index];
	 }
	 // Array Printing.
	 for(int index = 0; index < length; index++){
		cout<<numbers[index]<<"\n";
	 }
}

