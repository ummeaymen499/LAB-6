#include<iostream>
using namespace std;
string checkTitle(int a,char gender);
main()
{
    int age;
    char gender;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender (m/f): ";
    cin>>gender;
    string result=checkTitle(age,gender);
    cout<<"Your personal title is: "<<result;
}
string checkTitle(int a,char gender)
{
    string title;
    if(a<16 && gender=='f')
    {
        title="Miss";
    }
    if(a>=16 && gender=='f')
    {
         title="Ms.";
    }
    if(a<16 && gender=='m')
    {
         title="Master";
    }
    if(a>=16 && gender=='m')
    {
         title="Mr.";
    }
    return title;

}