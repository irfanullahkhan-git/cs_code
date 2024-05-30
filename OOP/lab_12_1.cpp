#include<iostream>
using namespace std;

class myClass{
	public:
	string name;
	int number;
	myClass(){
		number = 0;
		name = "";
	}
	myClass(int i_number, string i_name){
		number = i_number;
		name = i_name;
	}
	
	int sum(myClass obj){
		return number + obj.number;
	}
	
	int operator + (myClass obj){
		int num = number + obj.number;
		return num;
	}
	
	myClass operator - (myClass obj){
		int num = number + obj.number;
		myClass temp(num, "");
		return temp;
	}
	
	
	
};

int main(){
//	int num1 = 10, num2 = 20;
//	int result = num1 + num2;
//	cout<<result;

	myClass obj1(10, "Fayaz"), obj2(20, "Afzaal");
	myClass result;
//	int res = obj1.sum(obj2);
//	cout<<res;
	
	int res2 = obj1 + obj2;
	cout<<res2<<endl;
	
	result = obj1 - obj2;
	cout<<"result: "<<result.number;
	return 0;
}


