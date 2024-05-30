#include <iostream>
using namespace std;


class Shape{
	public:
		virtual int getArea(){
			return 0;
		}	
};

class Rectangle: public Shape{
	int width;
	int length;
	
	public:
		Rectangle(int i_width, int i_length){
			width = i_width;
			length = i_length;
		}
		
		int getArea(){
			cout<<"Rectangle Area: ";
			return width * length;
		}
};

class Triangle: public Shape{
	int base;
	int perpendicular;
	
	public:
		Triangle(int i_base, int i_perpendicular){
			base = i_base;
			perpendicular = i_perpendicular;
		}
		
		int getArea(){
			cout<<"Triangle Area: ";
			return (base * perpendicular)/2;
		}
};

int main(){
	Rectangle rect_1(10, 30); // static 
	cout<<rect_1.getArea()<<endl;
	
	Shape * shape_1 = NULL;
	
	int choice;
	cout<<"Please enter 1 for Rectangle and 2 for Triangle\n";
	cin>>choice;
	
	if(choice == 1){
		shape_1	= new Rectangle(10, 20);
	}
	
	if(choice == 2){
		shape_1	= new Triangle(20, 40); 
	}
	
	cout<<shape_1->getArea()<<endl;
	
	return 0;
	
}
