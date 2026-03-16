#include <iostream>
using namespace std;
int main ()
{
    system("color F6");
    cout<<"code 12: simple interest calculator"<<endl;
    float P,R,T,Si;
    cout<<"enter the principal amount ";cin>> P;
    cout<<"enter the annual interest rate ";cin>> R;
    cout<<"enter the time period in years ";cin>> T;
    Si= P*R*T*1/100;
    cout<< "simple interest is the "<<Si ;
    return 0;
}