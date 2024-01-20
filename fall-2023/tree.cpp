#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node * left;
	Node * right;
	
	Node(){
		left = right = NULL;
	}	
};

class Tree{
	public:
	Node *  root;
	int data;
	
	Tree(){
		root = NULL;
	}
	
	insert(int num){
		Node * temp = new Node();
		temp->data = num;
		Node * current = root;
		if(current == NULL){
			root = temp;
		}else{
			while(current->right != NULL || current->left != NULL){
				if(num > current->data){
					current = current->right;
				}else{
					current = current->left;
				}
			}
			
			if(num > current->data){
				current->right = temp;
			}else{
				current->left = temp;
			}
			
			
		}
	}
}; 
int main() {
	
	return 0;
}

