#include<iostream>
using namespace std;
bool parityanalysis(int a);
main()
{
    int num1;
    cout<<"Enter a 3-digit number: ";
    cin>>num1;
    bool result=parityanalysis(num1);
    cout<<result;
}
bool parityanalysis(int a)
{    bool output;
     int num1=a%10;
    int b=a/10;
    int num2=b%10;
    int num3=b/10;
    int finalnum=num1+num2+num3;
    if((a%2==0 && finalnum%2==0)||(a%2!=0 && finalnum%2!=0))
    {
      output=true;
    }
    else    
     
    {output=false;}
    return output;

}