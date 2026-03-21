#include <iostream>
using namespace std;
int main()
{
    system("color F4");
    cout<<"code 15 : vowel and consonants "<<endl;
    char ch;
    cout<<"enter the a character ";
    cin>> ch;
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'
        ||ch=='I'||ch=='U'||ch=='O'||ch=='E')
    cout<<ch <<" is a vowel";
    else 
    cout<<ch << " is a consonant";
    return 0;
}