#include <iostream>
using namespace std;

class myClass{
	public:
	int num;
	
	myClass(){
		num = 0;
	}
	myClass(int i_num){
		num = i_num;
	}
	
	void display(){
		cout<<"Value : "<<num<<endl;
	}

	int operator + (myClass& obj2){
		return num + obj2.num;		
	}
};

int main(){
	myClass obj1(10), obj2(20), obj3;
	int result = obj1 + obj2;
	cout<<"Result: "<<result;
	return 0;
}
