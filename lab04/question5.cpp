#include<iostream>
#include<string>
using namespace std;
class office{
	private:
		int seatingcapacity;
		string location;
		string*furniture;
		 int furnituresize;
		public:
			office(string location = "",int furnituresize = 0 , int seatingcapacity=0)
			:location(location),seatingcapacity(seatingcapacity),furnituresize(furnituresize){
			furniture = new string[furnituresize];
		}
			~office(){
			delete[] furniture;
			}
			void display(){
				cout<<"location"<<location<<endl;
				cout<<"seating capacity"<<seatingcapacity<<endl;
				cout<<"furniture:"<<endl;
				for(int i=0;i<3;i++){
					cout<<furniture[i]<<""<<endl;
}
			}
			};
			int main(){
		office* myoffice = new office("building A",50 ,3 );
				myoffice->display();
					delete myoffice;
					return 0;
			}
