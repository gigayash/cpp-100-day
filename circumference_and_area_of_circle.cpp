#include<iostream>
#include<conio.h>
using namespace std;
 double area_circle(double r){
 	double pai=3.14159;
	double c;
	cout<<"The circumference of the circle is: "<<2*pai*r<<endl;
 	double area=pai*r*r;
 	return area;
 }
 int main(){
 	system("color F3");
	cout<<"code :9"<<endl;
	cout<<"Circumference and Area of a Circle"<<endl;
 	cout<<"Enter the radius of the circle: ";
 	double r ;
 	cin>>r;
 	cout<<"The Area of the circle is: "<<area_circle(r);
 	getch();
 	return 0;}
