#include<iostream>
using namespace std;
bool greaternum(int a,int b);
main()
{
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    bool result=greaternum(num1,num2);
    cout<<result;
}bool greaternum(int a,int b)
{
    bool flag;
    flag=a>b;
    return flag;
}