#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    float feet, inch, weight, bmi;
    string group;
    cout << fixed << "== BMI Calculator ==" << endl;
    cout << "Step 1: Enter height\nFeet:" << endl;
    cin >> feet;
    cout << "Inches:" << endl;
    cin >> inch;
    cout << "Step 2: Enter weight\nPounds:" << endl;
    cin >> weight;
    bmi = (weight * 703)/(pow((feet*12 + inch), 2.0));
    if (bmi >= 29.9)
    {
        group = "obese";
    }
    else if (bmi >= 25)
    {
        group = "overweight";
    }
    else if (bmi >= 18.5)
    {
        group = "normal";
    }
    else if (bmi >= 0)
    {
        group = "underweight";
    }
    else
    {
        cout << "Error, invalid inputs." << endl;
    }
    cout << setprecision(1) << "BMI: " << bmi << ", you are " << group << "." << endl;
    return 0;
}
