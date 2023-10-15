#include <iostream>
using namespace std;
string calculateCost(float bud,string cat,int num_of_People);
main()
{
    int num_of_People;
    string cat;
    float bud;
    string result;
    cout << "Enter the budget: ";
    cin >> bud;
    cout << "Enter the category (VIP/Normal): ";
    cin >> cat;
    cout << "Enter the number of people in the group: ";
    cin >> num_of_People;
    result = calculateCost(bud,cat,num_of_People);
    cout << result;
}

string calculateCost(float bud,string cat,int num_of_People)
{
    float remainingBudget;
    float transportExpense;
    float ticketPrice;
    float difference;
    string output;
    if (num_of_People >= 1 && num_of_People <= 4)
    {
        transportExpense = bud * 75 / 100;
    }
    if (num_of_People >= 5  && num_of_People <= 9)
    {
        transportExpense = bud * 60 / 100;
    }
    if (num_of_People >= 10 && num_of_People <= 24)
    {
        transportExpense = bud * 50 / 100;
    }
    if (num_of_People >= 25 && num_of_People <= 49)
    {
        transportExpense = bud * 40 / 100;
    }
    if (num_of_People >= 50)
    {
        transportExpense = bud * 25 / 100;
    }

    remainingBudget = bud - transportExpense;
    if (cat == "VIP")
    {
        ticketPrice = 499.99 * num_of_People;
    }
    if (cat == "Normal")    
    {
        ticketPrice = 249.99 * num_of_People;
    }

    difference = (remainingBudget - ticketPrice) + 0.000005;
    if (difference > 0.0 )
    {
        output = "Yes! You have " + to_string(difference) + " leva left." ;
    }
    else{
        output = "Not enough money! You need " + to_string(-difference) + " leva.";
    }
    return output;
}