#include <iostream>
using namespace std;

class Stack{
	private:
	int data[5];
	int top;
	
	public:
	
	Stack(){
		top = -1;
	}
	
	void push(int num){
		if(isFull()){
			cout<<"Stack is full\n";
			return ;
		}
		
		top++;
		data[top] = num;	
	}
	
	int pop(){
		if(top < 0){
			cout<<"Stack is empty\n";
			return 0;
		}
		int temp = data[top];
		data[top] = 0;
		top--;
		return temp;
	}
	
	void display(){
		if(top < 0){
			cout<<"the stack is empty.\n";
			return ;
		}
		
		for(int index=top; index >= 0; index--){
			cout<<data[index]<<endl;
		}
	}
	
	bool isFull(){
		int size = sizeof(data)/sizeof(data[0]);
		return (top == size-1);
	}
	
};
int main() {
	Stack s;
	s.pop(); // the stack is empty
	
	s.push(10); // data[0]  = 10
	s.push(20); // data[1]  = 20
	s.push(30); // data[2]  = 30
	s.push(40); // data[3]  = 40
	s.push(50); // data[4]  = 50
	
	s.push(20); // The stack is full
	s.push(20); // The stack is full
	s.push(20); // The stack is full
	
	s.display();
	return 0;
}

