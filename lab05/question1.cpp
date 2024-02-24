#include<iostream>
#include<string>
using namespace std;
class square{
	float sidelength;
	float area;
	float static allareas;
	public:
		square(){
			sidelength = 0;
			area = 0;
		}
		square(float side){
			sidelength = side;
		}
		void calculatearea()
		{
			area = sidelength*sidelength;
			allareas = allareas + area;
		}
		void setsidelength(float side){
			sidelength = side;
		}
		float getsidelength(){
			return sidelength;
		}
		float getarea(){
			return area;
		}
static float getallareas(){
	return allareas;
}
};
float square::allareas = 0;
int main(){
	square s1(2);
	s1.calculatearea();
	cout<<"area :"<<s1.getarea()<<endl;
	cout<<"allareas:"<<s1.getallareas()<<endl;
	square s2(3);
	s2.calculatearea();
	cout<<"area:"<<s2.getarea()<<endl;
	cout<<"allarea:"<<s2.getallareas()<<endl;
	square s3(4);
	s3.calculatearea();
	cout<<"area:"<<s3.getarea()<<endl;
	cout<<"allarea:"<<s3.getallareas()<<endl;
	return 0;
}
