#include<iostream>
using namespace std;
class Appoitment{
	private:
	double cost;
	static int totalappoitment;
	static double totalearning;
	public:
	Appoitment(double appoitmentcost):cost(appoitmentcost){
		totalappoitment++;
		totalearning = totalearning+appoitmentcost;
	}	
	static double averagecost(){
		if(averagecost ==0){
			return 0;
		}
		return totalearning/totalappoitment;
	}
	double getcost()const{
	return cost;
	}
	static int gettotalappoitment(){
		return totalappoitment;
	}
	static double gettotalearning(){
		return totalearning;
	}
};
int Appoitment::totalappoitment = 0;
double Appoitment::totalearning = 0;
int main(){
	Appoitment appoitment1(230);
	Appoitment appoitment2(130);
	Appoitment appoitment3(45);
	cout<<"total earning of the salon:"<<Appoitment::gettotalearning()<<endl;
	cout<<" total appoitment of the salon are:"<<Appoitment::gettotalappoitment()<<endl;
	cout<<" average cost of salon:"<<Appoitment::averagecost()<<endl;
return 0;
}
