#include <iostream>
using namespace std;
struct Node{
	int data;
	Node * left = NULL;
	Node * right = NULL;
};
class Tree{
	public:
	Node * root;
	
	Tree(){
		root = NULL;
	}
	
	Node* insertNode(Node* ptr, int num){
		if(ptr == NULL){
			ptr = new Node();
			ptr->data = num;
			return ptr;
		}
		
		if(num > ptr->data){
			ptr->right = insertNode(ptr->right, num);
		}else{
			ptr->left = insertNode(ptr->left, num);
		}
	}
	
	void insert(int num){
		root = insertNode(root, num);
	}
	
	void inOrder(Node* ptr){
		if(ptr != NULL){
			inOrder(ptr->left);
			cout<<ptr->data<<endl;
			inOrder(ptr->right);
		}
	}
	
	void DisplayInOrder(){
		inOrder(root);
	}
	
};
int main() {
	Tree t;
	t.insert(10);
	t.insert(5);
	t.insert(6);
	t.DisplayInOrder();
	return 0;
}

