#include <iostream>
using namespace std;

// Base Classes
class Employee{
	string emp_no;
	int salary;
	public:
		Employee(string i_emp_no, int i_salary){
			emp_no = i_emp_no;
			salary = i_salary;
		}
		
		
};

class Student{
	string degree;
	string institute;
	public: 
		Student(string i_degree, string i_institute){
			degree = i_degree;
			institute = i_institute;
		}
};

// Derived Classes
class Scientist: public Student, public Employee{
	int publications;
	public:
		Scientist(string i_emp_no, int i_salary, string i_degree, string i_institute, int i_publications)
		: Student(i_degree, i_institute)
		: Employee(i_emp_no, i_salary){
			publications = i_publications;
		}
};

class Manager{
	
};

class Labour{
	
};
