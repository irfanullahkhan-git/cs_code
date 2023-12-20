#include <iostream>
using namespace std;

int main() {	
//	int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
//	
//	cout<<arr[0][0]; // 1
//	cout<<arr[1][1]; // 5	
//	
	int marks[5][2];
	for(int i = 0; i < 5; i++){
		
		cout<<"Please Enter Roll No.\n";
		cin>>marks[i][0];
	
		cout<<"Please Enter Marks.\n";
		cin>>marks[i][1];
	}
	cout<<"R.No\t\tMarks\n";
	for(int i=0; i < 5; i++){
		cout<<marks[i][0]<<"\t\t"<<marks[i][1]<<endl;
	}
	return 0;	
}

