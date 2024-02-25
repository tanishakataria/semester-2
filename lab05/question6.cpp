
#include<iostream>
#include<string>
using namespace std;
class graphicrenderingengine{
	public:
		void rendergraphic(){
			cout<<"Rendering graphic"<<endl;
		}
};
class inputhandler{
	public:
		void handleinput(){
			cout<<"handler input"<<endl;
		}
};
class physicsengine{
	public:
		void physicsstimulate(){
			cout<<"physics engine"<<endl;
		}
};
class gameengine{
	private:
		graphicrenderingengine graphicengine;
		inputhandler inputhandle;
		physicsengine enginephyics;
		public:
			void run(){
				cout<<"starting game engine:"<<endl;
				graphicengine.rendergraphic();
				inputhandle.handleinput();
				enginephyics.physicsstimulate();
			}
};
int main(){
	gameengine Gameengine;
	Gameengine.run();
}
