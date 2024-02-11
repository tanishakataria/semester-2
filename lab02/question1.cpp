
#include <iostream>
using namespace std;
void recursiveswap(int&x , int&y){
    if(x==y){
        cout<<"no swap requirred"<<endl;
    }
    else{
        int temp=x;
        x=y;
        y = temp;
        // recursiveswap(x,y);
    }
}
int main()
{
    int a,b;
    cout<<"enter the number a"<<endl;
    cin>>a;
    cout<<"enter the number b"<<endl;
    cin>>b;
    cout<<"the value before the swap are a= "<<a<<" and b = "<<b<<endl;
    recursiveswap(a,b);
    cout<<"the value after swap are a = "<<a<<" and b="<<b<<endl;
    return 0;
}
