#include <iostream>
using namespace std;

int main() {	
	
	for(int index1 = 0; index1 <= 10; index1 = index1+1){
		
		for(int index2 = 1; index2 <= index1; index2++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

