#include <iostream>
using namespace std;

class Car{
	int model;
	string color;
	
	public:
		Car(){
			setModel(2024);
			color = "white";
		}
//		Car: model(int i_model){
//			color = "green";
//		}
		Car(int i_model){
			model = NULL;
			setModel(i_model);
		}
		void display(){
			cout<<"Model: "<<getModel()<<"\t COlor: "<<color<<endl;
		}
		
		void setModel(int i_model){
			if(i_model > 0 && i_model < 2025){
				model = i_model;	
			}else{
				cout<<"Invalid Model: "<<i_model<<endl;
			} 
		}
		
		int getModel(){
			if(model == NULL){
				cout<<"Model is Invalid";
				return NULL;
			}else{
				return model;
			}
		}
};

int main(){
	Car car_1;
	car_1.display();
	
	Car car_2(2030);
	car_2.display();
	
	return 0;
}
