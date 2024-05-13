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
		
		
		void CanSwim(bool i_can_swim){
			if(i_can_swim){
				cout<<"This animal can Swim\n";	
			}else{
				cout<<"This animal can not Swim\n";
			}
		}
		void CanRun(bool i_can_run){
			if(i_can_run){
				cout<<"This animal can run\n";	
			}else{
				cout<<"This animal can not run\n";
			}
		}
		void CanFly(bool i_can_fly){
			if(i_can_fly){
				cout<<"This animal can fly\n";	
			}else{
				cout<<"This animal can not fly\n";
			}
		}
		
		void CanDrinkWater(bool i_can_drink){
			if(i_can_drink){
				cout<<"This animal can drink water\n";	
			}else{
				cout<<"This animal can not drink water\n";		
			}
		}
		
		void display(){
			cout<<"\n\n\t\t ANIMAL INFORMATION SYSTEM\n";
			cout<<"Name: "<<name<<"\tColor: "<<color<<"\t Age: "<<age<<endl;
			CanBreath();
			CanMove();
		}
		
	
};

class Fish: public Animal{
	public:
	Fish(string i_name, string i_color, int i_age): Animal(i_name, i_color, i_age){
		
	}
	void display(){
		Animal::display();
		Animal::CanSwim(true);
		Animal::CanFly(false);
		Animal::CanRun(false);
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
			Fish::display();
			Animal::CanDrinkWater(false);
			CanHatchEggs();
			cout<<"\tWings: "<<wings<<endl;
		}
};
class SeaHorse: public Fish{
	public:
	SeaHorse(string i_name, string i_color, int i_age): Fish(i_name, i_color, i_age){
		
	}
	void CanGiveBirth(){
			cout<<"This animal can give birth"<<endl;
	}
	void display(){
		Fish::display();
		Animal::CanDrinkWater(false);
		CanGiveBirth();
	}
};

int main(){
	SaadaFish fish("Grass", "grey", 3, 5);
	fish.display();
	
	SeaHorse sea_horse("Reef", "Blue", 4);
	sea_horse.display();
	return 0;
}
