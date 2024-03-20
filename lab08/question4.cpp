#include<iostream>
#include<string>
using namespace std;
class person{
	public:
	string name;
	int age;
	person(string name , int age):name(name),age(age){
	}
	void display(){
		cout<<"the name of the person is :"<<name<<endl;
		cout<<"the age of the person is : "<<age<<endl;
	}
};
class student :public person{
	public:
	int studentid;
	char grade;
	student(string name , int age ,int id,char grade):person(name , age),studentid(id),grade(grade){
	}
	void display(){
		cout<<"the id of the student is :"<<studentid<<endl;
		cout<<"the grade of the student is :"<<grade<<endl;
	}
};
class Teacher : public person{
	public:
	string subject;
	int roomnum;
	Teacher(string name,int age ,string subject,int roomnum):person(name,age),subject(subject),roomnum(roomnum){
	}
	void display(){
		cout<<"the subject she teaches is : "<<subject<<endl;
		cout<<"the roomnum is :"<<roomnum<<endl;
	}
};
class graduate:public student , public Teacher{
	public:
	graduate(string name , int age , int studentid,char grade,string subject,int roomnum):student(name ,age ,studentid,grade),Teacher(name , age,subject , roomnum){
	}
	void display(){
		cout<<"graduate system details are : "<<endl;
		student::display();
		Teacher::display();
	}
};
int main(){
	graduate G("Tanisha" , 24, 26,'B',"Math",6);
	G.display();
}
