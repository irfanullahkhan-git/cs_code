#include <iostream>
using namespace std;

class SimpleClass{
	
	public:
		void display(float num1){
			cout<<"Hi, i am display function: "<<num1;
		}
		
		void display(int num){
			cout<<"display function has been called: "<<num;
		}

};

int main(){
	SimpleClass obj;
	obj.display((float)10.5);
	
	
	return 0;
}
