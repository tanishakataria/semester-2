#include<iostream>
using namespace std;
class loanhelper{
	private:
float loanamount;
float rate;
int month;
public:
	loanhelper(float amount,int month,float rate):
	loanamount(amount),month(month),rate(rate){
	}	
	float calculatemonthlypayment() const{
	float monthlypayment = (loanamount/month)*(1+rate);
	return monthlypayment;
	}
	void printpaymentschedule() const{
	float monthlypayment = calculatemonthlypayment();
	cout<<"you have to pay"<<monthlypayment<<"every month for"<<month<<"months to repeat your loan"<<endl;
	}
};
int main(){
	float loanamount;
	int month;
	float rate;
	cout<<"enter the loan amount"<<endl;
	cin>>loanamount;
	cout<<"enter the number of month to repay the loan"<<endl;
	cin>>month;
	cout<<"enter the rate of intrest "<<endl;
	cin>>rate;
	rate/=100;
	loanhelper l1(loanamount,month,rate);
	l1.printpaymentschedule();
	return 0;
}
