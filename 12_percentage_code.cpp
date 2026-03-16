#include <iostream>
using namespace std;
int main() {
 system("color F7");
 cout<<"code 11: percentage calculator"<<endl;
    int a,b,c,d,e;
    int total_marks;
    double percentage;
    cout << "Hindi number: "; cin >> a;
    cout << "English number: "; cin >> b;
    cout << "Mathematics number: "; cin >> c;
    cout << "Physics number: "; cin >> d;
    cout << "Chemistry number: "; cin >> e;
    total_marks = a + b + c + d + e;
    cout << "sum is: " << total_marks << endl;
    percentage = total_marks / 5.0; 
    cout << "percentage: " << percentage << "%" << endl;
    return 0;
}