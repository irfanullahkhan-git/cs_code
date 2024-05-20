#include<iostream>
using namespace std;

class GrandParent{
	protected:
	int gValue;
	public:
	GrandParent(int i_gVal): gValue(i_gVal * -1) {
		
	}
	void display(){
		cout<<"I am Grand: "<<gValue;
	}
};

class Parent: public GrandParent{
	protected:
		int pValue;
	public:
		Parent(int i_gVal, int i_Pval): GrandParent(i_gVal * i_Pval), pValue(i_Pval){
			
		}
	void display(){
		cout<<"Parent: "<<pValue<<"\tG-Parent: "<<gValue<<endl;
	}
	void play(){
		int temp = pValue * -1;
		pValue = gValue + pValue;
		gValue = temp + temp * pValue;
	}
		
};
	
	int main(){
		Parent p(2, -13);
		p.display();
		p.play();
		p.display();
		return 0;	
	}
	
	
	
	
