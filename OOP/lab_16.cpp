#include <iostream>
using namespace std;

class ClassA{
	public:
		virtual void display() = 0;
};

class ClassB: public ClassA{
	public:
		void print(){
			cout<<"I am Class B object\n";
		}
		void display(){
			cout<<"Now i am not an abstract class";
		}

};

int main(){
//	ClassA * obj_a = new ClassA();
//	obj_a->display();
	
	ClassB obj_b;
	obj_b.print();
	return 0;	
}
