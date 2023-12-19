#include <iostream>
using namespace std;

int main() {	
	int total_students;
	cout<<"Please enter number of students\n";
	cin>>total_students;
	
	int marks[total_students];
	
	for(int i = 0; i < total_students; i++){
		cout<<"Please enter student marks\n";
		cin>>marks[i];
	}
	
	int sum = 0;
	for(int i = 0; i < total_students; i++){
		sum = sum + marks[i];
	}
	cout<<"Sum of All Marks = "<<sum<<endl;
	int average = sum/total_students;
	cout<<"Average = "<<average;
	return 0;
}

