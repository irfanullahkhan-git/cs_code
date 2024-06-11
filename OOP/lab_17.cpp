#include<iostream>
using namespace std;

template <typename T>
void display(T input){
	cout<<"You have enterd: "<<input<<endl;
}

// OLD Implementation
//	void display(int input){
//		cout<<"You have enterd: "<<input<<endl;	
//	}
//	
//	void display(string input){
//		cout<<"You have enterd: "<<input<<endl;	
//	}

int main(){
	// Function Template
	int num = 10;
	string name = "irfan";
	display<int>(num);
	display<string>(name);
	return 0;	
	
}
