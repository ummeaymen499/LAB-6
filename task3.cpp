#include<iostream>
using namespace std;
float perimeter(char s,float a);
main()
{
    float num;
    char shape;
    cout<<"Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>shape;
    cout<<"Enter the value: ";
    cin>>num;
    float output=perimeter(shape,num);
    cout<<"The perimeter is: "<<output; 
}
float perimeter(char s,float a)
{   float result;
        if(s=='s')
    {
        result=a*4;
       return result;
    }
    
    if(s=='c')
    {
      result=a*6.28;
       return result;
    }
    if(s=='t')
    {
      result=a*3;
       return result;
    }
    if(s=='h')
    {
      result=a*6;
        return result;
    }
    
}