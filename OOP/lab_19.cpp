#include<iostream>
using namespace std;

class Engine{
	public: 
		void start(){
			cout<<"Gharrrrrrr...."<<endl;
		}
};
class MP3Player{
	public:
		void play(){
			cout<<"Bado Badi...."<<endl;
		}
};
class Car{
	Engine eng;
	MP3Player player;
	public:
	void start(){
		cout<<"Car is being started\n";
		eng.start();
		player.play();
	}
};

int main(){
	Car c[10];
	for(int index = 0; index < 10; index++){
		c[index].start();
	}
	
	return 0;
}
