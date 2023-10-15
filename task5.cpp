#include<iostream>
using namespace std;
float discount(string day,string month,float amount);
main()
{
    string day;
    string month;
    float amount;
    cout<<"Enter Purchase Day: ";
    cin>>day;
    cout<<"Enter Purchase Month: ";
    cin>>month;
    cout<<"Enter Purchase Amount: ";
    cin>>amount;
    float result=discount(day,month,amount);
    cout<<"Payable Amount after discount: "<<result;
}
float discount(string day,string month,float amount)
{  
    float payable;
    if(day=="Sunday")
    {
        if(month=="October")
        {
      payable=amount-(amount*0.1);
        }
    
       else
        {
        payable=amount-(amount*0.05);
        }
    }   
    else
    {
        payable=amount;
    }
    return payable;
}