#include <iostream>
using namespace std;

class Student{
	public:
	int roll_no;
	int marks;
	int age;
	
	void insert(){
		cout<<"Please enter roll no\n";
		cin>>roll_no;
		cout<<"Please enter marks\n";
		cin>>marks;
		cout<<"Please enter age\n";
		cin>>age;
	}
	
	void display(){
		cout<<"Roll No: "<<roll_no<<"\tMarks: "<<marks<<"\tAge: "<<age<<endl;
	}
	
};

int main() {
	Student student_1;
	Student student_2;
	
	student_1.insert();
	student_1.display();


	student_2.insert();
	student_2.display();
		
//	cout<<"Please enter roll no\n";
//	cin>>student_1.roll_no;
//	cout<<"You entered "<<student_1.roll_no;
}
