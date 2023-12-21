#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node * next;
};
void insert(int data, Node*  head, Node*  tail){
	Node * temp = new Node();
	temp->data = data;
	
	if(head == NULL){
		head = temp;	
	}else{
		tail->next = temp;
	}
	tail = temp;
}
void Display(Node * head){
	
	cout<<"------------- ALL ITEMS -------------\n";
	Node * temp = head;
	while(temp){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}
int main() {
	int input, data;	
	Node * head = NULL;
	Node * tail = NULL;
	
	start:
	cout<<"***************** LINKED LIST ****************\n";
	cout<<" 1. Insert\n";
	cout<<" 2. Display\n";
	cout<<" 3. Exit\n";
	cout<<"***************** LINKED LIST ****************\n";
	cin>>input;
	
	switch(input){
		case 1:
			cout<<"Please enter a number\n";
			cin>>data;
			insert(data, head, tail);		
			goto start;
		break;
		case 2:
			Display(head);
			goto start;
		break;
	};
	return 0;
}

