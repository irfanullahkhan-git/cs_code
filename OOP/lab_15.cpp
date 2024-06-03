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
	float f = 10.5;
	obj.display((float)10.5);
	
	
	return 0;
}
