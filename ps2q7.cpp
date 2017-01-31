#include<iostream>
using namespace std;

/*This code block allows the cost of stock purhcasing
to be calculated with easily adjustable variables for
quick changes of value and an easy transition to
user-inputted value assignments*/

int main()
{
    //Given Information
    float PricePerShare;
    int NumberOfShares;
    float Commission;
    PricePerShare = 21.77;
    NumberOfShares = 600.00;
    Commission = .02;
    //Calculations
    int StockCost;
    float CommissionCost;
    float TotalCost;
    StockCost = PricePerShare*NumberOfShares;
    CommissionCost = StockCost*Commission;
    TotalCost = StockCost+CommissionCost;
    //Output
    cout << "Amount paid without commission: $" << StockCost << endl;
    cout << "Amount of the commission: $" << CommissionCost << endl;
    cout << "Total amount paid: $" << TotalCost << endl;
    return 0;
}
