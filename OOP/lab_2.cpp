#include<iostream>
using namespace std;

class Car{
	string model;
	string color;
	int year;
	public:
		Car(){
			model = "Toyota";
			color = "black";
		}
		Car(string i_model){
			model = i_model;
		}
		Car(int i_year){
			year = i_year;
		}
		
		Car(string i_model, string i_color){
			model = i_model;
			color = i_color;
		}
		void setModel(string i_model){
			model = i_model;
		}
		string getModel(){
			return model;
		}
		
		void setColor(string i_color){
			color = i_color;
		}
		string getColor(){
			return color;
		}
};

int main(){
	Car car1;
//	car1.setModel("Honda");
	cout<<"Model: "<<car1.getModel()<<"\t Color: "<<car1.getColor()<<endl;
	
	Car car2("Honda");
	cout<<"Model: "<<car2.getModel()<<"\t Color: "<<car2.getColor()<<endl;
	
	Car car3("Suzuki", "White");	
	cout<<"Model: "<<car3.getModel()<<"\t Color: "<<car3.getColor()<<endl;
	
	return 0;
}

