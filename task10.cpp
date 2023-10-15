#include<iostream>
using namespace std;
bool aresamenumber(int num1,int num2,int num3);
main()
{
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    bool output=aresamenumber(a,b,c);
    cout<<output;
}
bool aresamenumber(int num1,int num2,int num3)
{   
    bool result=(num1==num2)&&(num2==num3);
    return result;
}