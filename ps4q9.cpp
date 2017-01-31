#include<iostream>
using namespace std;

int main()
{
    float grade;
    cout << "Enter your percentage:" << endl;
    cin >> grade;
    if (grade < 0 || grade >100)
    {
        cout << "Letter grade: Invalid percentage" << endl;
    }
    else if (grade >=90)
    {
        cout << "Letter grade: A" << endl;
    }
    else if (grade >=80)
    {
        cout << "Letter grade: B" << endl;
    }
    else if (grade >=70)
    {
        cout << "Letter grade: C" << endl;
    }
    else if (grade >=60)
    {
        cout << "Letter grade: D" << endl;
    }
    else
    {
        cout << "Letter grade: F" << endl;
    }
    return 0;
}
