#include<iostream>
using namespace std;
int greaternum(int a,int b,int c);
main()
{
    int num1,num2,num3;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    int result=greaternum(num1,num2,num3);
    cout<<"The greatest number among "<<num1<<", "<<num2<<", and "<<num3<<" is: "<<result; 
}
int greaternum(int a,int b,int c)
{   int greater;
     if(a>b && a>c)
     {
       greater =a;
       return greater;
     }
     if(b>a && b>c)
     {
       greater=b;
       return greater;
     }
     if(c>a && c>b)
     {
        greater=c;
        return greater;
     }
   


    
}