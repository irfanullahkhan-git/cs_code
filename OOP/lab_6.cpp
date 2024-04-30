#include <iostream>
using namespace std;

class Student{
	string name;
	int age;
	string class_number;
	string semester;
	public:
		void setName(string i_name){
			name = i_name;
		}
		void setage(int i_age){
			age = i_age;
		}
		void setClassNumber(string i_class_number){
			class_number = i_class_number;
		}
		void setSemester(string i_semester){
			semester = i_semester;
		}
		
		string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
		string getClassNumber(){
			return class_number;
		}
		string getSemester(){
			return semester;
		}
		
		void display(){
			cout<<"Name : "<<name<<" \tAge: "<<age<<endl;
		}
};

class LabAtt{
	string name;
	int age;
	public:
		void setName(string i_name){
			name = i_name;
		}
		void setage(int i_age){
			age = i_age;
		}
		string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
		void display(){
			cout<<"Name : "<<name<<" \tAge: "<<age<<endl;
		}
};

class Teacher{
	string name;
	int age;
	string subject;
	public:
		void setName(string i_name){
			name = i_name;
		}
		void setage(int i_age){
			age = i_age;
		}
		void setSubject(string i_subject){
			subject = i_subject;
		}
		string getName(){
			return name;
		}
		int getAge(){
			return age;
		}
		string getSubject(){
			return subject;
		}
		
		void display(){
			cout<<"Name : "<<name<<" \tAge: "<<age<<endl;
		}
};

int main(){
	Student student_1;
	student_1.setName("HassanWali");
	student_1.setage(19);
	student_1.display();
	
	Student student_2;
	student_2.setName("Ubaid");
	student_2.setage(18);
	student_2.display();
	
	LabAtt lab_att_1;
	lab_att_1.setName("Fazlullah");
	lab_att_1.setage(40);
	lab_att_1.display();
	
	Teacher teacher_1;
	teacher_1.setName("Irfan");
	teacher_1.setage(65);
	teacher_1.display();
	
	
	return 0;
}
