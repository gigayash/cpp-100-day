#include<iostream>
using namespace std;
int main(){
	system("color F1");
	cout<<"bodmas calculater\n";
	float a,b,c,d,e,g;
	cout << "Enter value for a: ";
	cin>> a;
	cout << "Enter value for b: ";
	cin>> b;
	cout << "Enter value for c: ";
	cin>> c;
	cout << "Enter value for d: ";
	cin>> d;
	cout << "Enter value for e: ";
	cin>> e;
	cout << "Equation: " << a << " - " ;
	cout<< b << " * " ;
	cout<< c << " / " ;
	cout<< d << " + ";
	cout << e << endl;
	g = a - b * c / d + e;
	cout<<"ans : "<<g;
	return 0;
}
