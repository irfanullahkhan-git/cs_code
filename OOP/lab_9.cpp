#include <iostream>
using namespace std;

class Person{
	protected:
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
class Student: public Person{
	string class_number;
	string semester;
	public:
		void setClassNumber(string i_class_number){
			class_number = i_class_number;
		}
		void setSemester(string i_semester){
			semester = i_semester;
		}
		string getClassNumber(){
			return class_number;
		}
		string getSemester(){
			return semester;
		}
		
		
};

class LabAtt: public Person{
};

class Teacher: public Person{
	string subject;
	public:
		void setSubject(string i_subject){
			subject = i_subject;
		}
		string getSubject(){
			return subject;
		}
};

class ClassRepresentative: public Student{
	public:
		void display(){
			Student::display();
			cout<<"\n ------ CR --------";
		}
};

int main(){
	Student student_1;
	student_1.setName("Afzaal");
	student_1.setage(19);
	student_1.display();
	
	ClassRepresentative cr;
	cr.setName("Maaz");
	cr.setage(19);
	cr.display();
	
	return 0;
}
