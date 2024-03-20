#include<iostream>
using namespace std;
 class Book{
 	public:
 	string title;
 	string author;
 	string publisher;
 	Book(string name,string author,string publishing):title(name),author(author),publisher(publishing){
	 }
	 void display(){
	 	cout<<"Book details are given below"<<endl;
	 	cout<<"the title of the book is : "<<title<<endl;
	 	cout<<"the author of the book is : "<<author<<endl;
	 	cout<<"the publisher of the book is : "<<publisher<<endl;
	 }
 };
 class fictionbook:public Book{
 	public:
 	string genre;
 	string protagonist;
 	fictionbook(string author,string publisher,string title , string genre,string protagonist):Book(author,publisher,title),genre(genre),protagonist(protagonist){
	 }
	 void display(){
	 	Book::display();
	 	cout<<"the genre of the book is :"<<genre<<endl;
	 	cout<<"the protagonist of the book is :"<<protagonist<<endl;
	 }
 };
 int main(){
 	fictionbook F("The Great Gatsby","F. Scott Fitzgerald","Scribner","Drama","Jay Gatsby");
 	F.display();
 	return 0;
 }
