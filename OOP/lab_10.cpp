#include<iostream>
using namespace std;

class Animal{
	string name;
	string color;
	int age;
	
	public:
		Animal(string i_name, string i_color, int i_age){
			name = i_name;
			color = i_color;
			age = i_age;
		}
		
		void CanBreath(){
			cout<<"This animal can breath"<<endl;
		}
		void CanMove(){
			cout<<"This animal can move"<<endl;
		}
		
		void display(){
			cout<<"\t\t ANIMAL INFORMATION SYSTEM\n";
			cout<<"Name: "<<name<<"\tColor: "<<color<<"\t Age: "<<age;
		}
		
	
};

class Fish: public Animal{
	public:
	Fish(string i_name, string i_color, int i_age): Animal(i_name, i_color, i_age){
		
	}
	
	void CanSwim(){
		cout<<"This animal can Swim\n";
	}
	void CanRun(){
		cout<<"This animal can not run\n";
	}
	void CanFly(){
		cout<<"This animal can not fly\n";
	}
	void CanDrinkWater(){
		cout<<"This animal does not drink water\n";
	}
};

class SaadaFish: public Fish{
	int wings;
	public:
		SaadaFish(string i_name, string i_color, int i_age, int i_wings): Fish(i_name, i_color, i_age){
			wings = i_wings;
		}
		void CanHatchEggs(){
			cout<<"This animal can hatch eggs"<<endl;
		}
		void display(){
			Animal::display();
			cout<<"\tWings: "<<wings<<endl;
		}
};

int main(){
	SaadaFish fish("Grass", "grey", 3, 5);
	fish.display();
	fish.CanBreath();
	fish.CanDrinkWater();
	fish.CanFly();
	fish.CanRun();
	
	return 0;
}
