#include <iostream>
using namespace std;
int main() {
    system("color F2");
 int i;
 float f;
 double d;
 char c;
 long double l;
 bool b;
 cout << "Enter an integer: ";
 cin >> i;
 cout << "Enter a float: ";
 cin >> f;
 cout << "Enter a double: ";
 cin >> d;
 cout << "Enter a character: ";
 cin >> c;
 cout << "Enter a big number: ";
 cin>> l;
  cout << "Enter a boolean (0 or 1): ";
 cin>> b;
 
 cout << "Size of int: " << sizeof(i) << " bytes, Value: " << i << endl;
 cout << "Size of float: " << sizeof(f) << " bytes, Value: " << f << endl;
 cout << "Size of double: " << sizeof(d) << " bytes, Value: " << d << endl;
 cout << "Size of char: " << sizeof(c) << " bytes, Value: " << c << endl;
 cout << "Size of long double: " << sizeof(l) << " bytes, Value: " << l << endl;
 cout << "Size of bool: " << sizeof(b) << " bytes, Value: " << b << endl;
 return 0;
}