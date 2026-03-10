#include <iostream>
using namespace std;
int main()
{
    system("color F2");
    cout<<"area of rectangle and perimeter\n ";
    double l,w,a,p;
    cout<<"enter the length ";
    cin>> l;
    cout<<"enter the width ";
    cin>>w;
    a=l*w;
    p=2*l+2*w;
    cout<<"area of the rectangle "<<a<<"\n";
    cout<<"perimeter of the rectangle "<<p;
    return 0;
}