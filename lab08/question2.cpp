#include<iostream>
#include<string>
using namespace std;
class character{
	public:
	int health;
	int damage;
	character(int health , int damage):health(health),damage(damage){
	}
	 void display(){
		cout<<" the details of the character are:"<<endl;
		cout<<" the health of the character is :"<<health<<endl;
		cout<<"the damage of the character :"<<damage<<endl;
	}
};
class Enemy : public character{
	public:
	Enemy(int health , int damage):character(health,damage){
	}
		void display(){
		cout<<"this is an enemy"<<endl;
	character::display();
}
};
class player: public character{
	public:
	player(int health , int damage):character(health,damage){
	}
	void display(){
		cout<<"this is an player"<<endl;
	character::display();
}
};
class wizard : public player{
	public:
	int magic;
	string spell;
	wizard(int health,int damage,int magic,string spell):player(health,damage),magic(magic),spell(spell){
	}
	void display(){	
		cout<<"this is an wizard"<<endl;
	player::display();
		cout<<"the magic of the wizard is :"<<magic<<endl;
		cout<<"the spell of the wizard is :"<<spell<<endl;
	}
};
int main(){
	wizard w(23,40,56,"wizard");
	w.display();
	return 0;
}
