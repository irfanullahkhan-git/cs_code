#include<iostream>
using namespace std;
template <typename T>
class ClassA{
	public:
	T data;
	void setData(T i_data){
		data = i_data;
	}
	T getData(){
		return data;
	}
	void display(){
		cout<<data<<endl;
	}
};


int main(){
	ClassA<string> obj;
	obj.setData("GDC Lahor");
	obj.display();
	
	ClassA<int> obj1;
	obj1.setData(10);
	obj1.display();
	
	return 0;
}
