#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node * next;
};
class LinkedList{
	private:
		Node * head = NULL;
		Node * tail = NULL;
	public: 
		void insert(int data){
			Node * temp = new Node();
			temp->data = data;
			
			if(head == NULL){
				head = temp;	
			}else{
				tail->next = temp;
			}
			tail = temp;
		}
		
		void Display(){	
			cout<<"------------- ALL ITEMS -------------\n";
			Node * temp = head;
			while(temp){
				cout<<temp->data<<endl;
				temp = temp->next;
			}
		}
		
		int Search(int to_find){
			Node * temp = head;
			int position = 0;
			while(temp){
				if(temp->data == to_find){
					return position;
				}
				temp = temp->next;
				position++;
			}
			
			return -1;
		}
		
		void Delete(int to_delete){
			Node * temp = head;
			Node * previous = NULL;
			while(temp){
				if(temp->data == to_delete){
					if(previous){
						previous->next = temp->next;
					}else{
						head = temp->next;
					}
					delete temp;
					cout<<"The Node has been deleted.";
					return ;
				}
				
				previous = temp;
				temp = temp->next;
			}
			
			cout<<"The Number you enter does not exist.";
		}
		
};
int main() {
	int input, data;
	LinkedList list;
	
	start:
	cout<<"***************** LINKED LIST ****************\n";
	cout<<" 1. Insert\n";
	cout<<" 2. Display\n";
	cout<<" 3. Search\n";
	cout<<" 4. Delete\n";
	cout<<" 5. Exit\n";
	cout<<"***************** LINKED LIST ****************\n";
	cin>>input;
	
	switch(input){
		case 1:
			cout<<"Please enter a number\n";
			cin>>data;
			list.insert(data);
			goto start;
		break;
		case 2:
			list.Display();
			goto start;
		break;
		
		case 3:
			cout<<"Please enter a number you want to find.";
			cin>>data;
			data = list.Search(data);
			if(data > -1){
				cout<<"The number your entered exists at position: "<<data<<"\n";
			}else{
				cout<<"The number you entered does not exist."<<"\n";
			}
			goto start;
		case 4:
			cout<<"Please enter a number you want to delete\n";
			cin>>data;
			list.Delete(data);
			goto start;
		break;
	};
	return 0;
}

