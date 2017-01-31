#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    cout << "Enter some word" << endl;
    cin >> word;
    for (int counter = word.length() - 1 ; counter >= 0; counter--)
    {
        cout << word[counter];
    }
    cout << endl;
    return 0;
}
