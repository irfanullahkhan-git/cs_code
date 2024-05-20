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
			return (base * perpendicular)/2;
		}
};

int main(){
	Shape * rect = new Rectangle(10, 20);
	cout<<"Rectangle Area: "<<rect->getArea();
	return 0;
}
