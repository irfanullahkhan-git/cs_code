#include <iostream>
using namespace std;

int main() {	
	int month;
	cout<<"Please enter the month\n";
	start:
	cin>>month;
	
	switch(month){
		// 30 days
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<"This month has 30 days.";
			break;
			
		// 31 days
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"This month has 31 days.";
			break;
		
		case 2:
			cout<<"This month has 28 or 29 days.";
			break;
		default:
			cout<<"You have entered incorrect month number.\nPlease enter valid month number.";
			goto start;
	}
	
	return 0;
}

