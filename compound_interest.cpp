#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    system("color F5");
    cout<<"code 13 : compound interest"<<endl;
    float P,R,T,A,Ci;
    cout<<"enter the perncipal amount ";cin>> P;
    cout<<"enter the annual rate of interst in percentage ";cin>>R;
    cout<<"enter the time in the year ";cin>>T;
    R=R/100;
    A=P*pow((1+R),T);
    Ci=A-P;
    cout<<"compound interst is the "<< Ci;
    return 0;}