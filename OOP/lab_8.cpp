#include<iostream>
using namespace std;

// Base class (parent)
class BabaClass {
  public:
    void babaFunction() {
      cout << "Some content in Baba class.\n" ;
    }
};

// Derived class (child)
class DajiClass: public BabaClass {
	public:
		void dajiFunction(){
			cout << "Some content in Daji class.\n" ;
		}
};

// Derived class (grandchild)
class MyGrandChild: public DajiClass {
	
};

int main() {
  MyGrandChild myObj;
  myObj.babaFunction();
  myObj.dajiFunction();
  return 0;
} 
