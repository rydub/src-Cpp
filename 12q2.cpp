#include <iostream>
using namespace std;

int main()
{
    float numa, numb, numc;
    cout << "Enter three numbers separated by a space" << endl;
    cin >> numa >> numb >> numc;
    if (numc > numb && numc > numa)
    {
        cout << numc << " is the highest." << endl;
    }
    else if (numb > numc && numb > numa)
    {
        cout << numb << " is the highest." << endl;
    }
    else
    {
        cout << numa << " is the highest." << endl;
    }
    return 0;
}
