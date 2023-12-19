#include <iostream>
using namespace std;

int main() {	
	int arr[5] = {10, 20, 30, 40, 50};
	cout<<arr[0]<<endl;
	cout<<arr<<endl;
	cout<<&arr[0]<<endl;
	
	int * ptr = arr;
	cout<<ptr<<endl;
	
	ptr++; // now it points towrads 20
	cout<<ptr<<endl;
	cout<<*ptr<<endl;

	ptr++; // now it points towards 30
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	
	return 0;
}

