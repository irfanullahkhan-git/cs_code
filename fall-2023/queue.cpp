#include <iostream>
using namespace std;

class Queue{
	public:
		int data[5];
		int rear;
		
		Queue(){
			rear = -1;
		}
		
		void enqueue(int num){
			bool is_queue_full = isFull();
			if(is_queue_full){
				cout<<"Error: the Queue has no more space to accomodate further numbers.\n";
			}else{
				rear++;
				data[rear] = num;
			}
		}
		
		int	dequeue(){
			if(rear < 0){
				cout<<"Error: The queue is empty";
				return 0;
			}
			
			int return_num = data[0];
			for(int index = 0; index < rear; index++){
				data[index] = data[index+1];
			}
			data[rear] = 0;
			rear--;
			return return_num;
		}
		
		bool isFull(){
			int size = sizeof(data)/sizeof(data[0]);
			if(rear == size-1){
				return true;
			}
			return false;
		}
		
		void display(){
			if(rear < 0){
				cout<<"The Queue is empty.";
			}else{
				for(int index = 0; index <= rear; index++){
					cout<<data[index]<<endl;
				}
			}
		}
	
	
};
int main() {
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	q.enqueue(70);
	q.enqueue(80);
	q.enqueue(90);
	q.enqueue(100);
	q.dequeue();
	q.display();
	return 0;
}

