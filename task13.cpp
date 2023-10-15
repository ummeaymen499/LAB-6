#include<iostream>
using namespace std;
float lowestPrice(int num_kilometers,string period);
main()
{
    int num_kilometers;
    string period;
    cout<<"Enter the number of kilometers: ";
    cin>>num_kilometers;
    cout<<"Enter the period of the day (day/night): ";
    cin>>period;
    float result=lowestPrice(num_kilometers,period);
    cout<<"Lowest price for "<<num_kilometers<<" kilometers: "<<result<<" EUR";
}
float lowestPrice(int num_kilometers,string period)
{float price;
   

        if(num_kilometers>=20)
        {
            price=num_kilometers*0.09;
        }

 
       if(num_kilometers>=100)
        {
            price=num_kilometers*0.06;
        }
    
    
    if(period=="day" && num_kilometers<20)
    price=0.7+(num_kilometers*0.79);
    if(period=="night" && num_kilometers<20)
    price=0.7+(num_kilometers*0.9);
    return price;

}