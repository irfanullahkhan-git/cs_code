#include <iostream>
using namespace std;

class Person{
	string name;
	int age;
	char gender;
	string address;
	
	public: 
	void setName(string i_name){
		name = i_name;
	}
	
	string getName(){
		return name;
	}
	void setAge(int i_age){
		age = i_age;
	}
	int getAge(){
		return age;
	}
	void setGender(char i_gender){
		gender = i_gender;
	}
	char getGender(){
		return gender;
	}
	void setAddress(string i_address){
		address = i_address;
	}
	string getAddress(){
		return address;
	}
};

int main(){
	Person person_1;
	person_1.setName("Ali");
	person_1.setAge(18);
	person_1.setGender('M');
	person_1.setAddress("Lahor");
	
	cout<<"Name: "<<person_1.getName()<<endl;
	cout<<"Age: "<<person_1.getAge()<<endl;
	cout<<"Gender: "<<person_1.getGender()<<endl;
	cout<<"Address: "<<person_1.getAddress()<<endl;
	return 0;
}
