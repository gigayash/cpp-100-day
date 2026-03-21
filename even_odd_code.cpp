#include <iostream>
using namespace std ;
int main()
{
    system("color F4");
    cout<<"code 14 : even odd code "<<endl;
    int x;
    cout<<"enter the number ";
    cin>> x;
    if (x%2==0) {
        cout<<"number is the even";
    } else {
        cout<<"number is the odd";
    }
    return 0;
}