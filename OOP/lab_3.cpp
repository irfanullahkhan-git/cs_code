#include<iostream>
using namespace std;

class Car{
	string model;
	string color;
	int year;
	
	public:
	Car(){
		model = "Toyota";
		year = 2024;
	}
	
	Car(string i_model){
		model = i_model;
		year = NULL;
	}
	
	Car(string i_color, int i_year){
		color = i_color;
		year = i_year;
	}

	Car(int i_year, string i_color){
		color = i_color;
		year = i_year;
	}		
	void displayInfo(){
		cout<<"Model: "<<model<<"\tYear: "<<year<<"\t Color: "<<color<<endl;		
	}
	
};

int main(){
	Car car1;
	car1.displayInfo();
	
	Car car2("Honda");
	car2.displayInfo();
	
	Car car3("Black", 2023);
	car3.displayInfo();
	
	Car car4(2020, "White");
	car4.displayInfo();
	
	
	return 0;
}
