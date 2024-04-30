#include <iostream>
using namespace std;

class Car{
	int model;
	public:
		Car(){
			
		}
		Car(int i_model){
			setModel(i_model);
		}
		void setModel(int i_model){
			model = i_model;
		}
		void display(){
			cout<<"Model: "<<model<<endl;
		}
};
int main(){
	Car car_1(2024);
	car_1.display();
	return 0;
}
