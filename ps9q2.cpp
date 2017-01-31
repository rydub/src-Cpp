#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
    string SSN;
    cout << "Enter your SSN in this format: XXX-XX-XXXX" << endl;
    cin >> SSN;

// Check length
    if(SSN.length() != 11)
    {
        cout << "Problem: You must type exactly 11 characters." << endl;
        return 0;
    }

// Check dashes
    int dash1 = SSN.find_first_of('-');
    int dash2 = SSN.find_last_of('-');
    if(dash1 != 3 || dash2 != 6)
    {
        cout << "Problem: The dashes are missing or are in the wrong spot" << endl;
        return 0;
    }

// Check nums
    for (int i = 0; i < dash1; i++)
    {
        if(!isdigit(SSN[i]))
            {
                cout << "Problem: Only digits are allowed in a SSN" << endl;
                return 0;
            }
    }
    for (int i = dash1 + 1; i < dash2; i++)
    {
        if(!isdigit(SSN[i]))
            {
                cout << "Problem: Only digits are allowed in a SSN" << endl;
                return 0;
            }
    }
    for (int i = dash2 + 1; i < SSN.length(); i++)
    {
        if(!isdigit(SSN[i]))
            {
                cout << "Problem: Only digits are allowed in a SSN" << endl;
                return 0;
            }
    }
//If you make it this far, it works!
    cout << "That is valid." << endl;
    return 0;
}
