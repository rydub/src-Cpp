#include<iostream>
using namespace std;

int main()
{
    int i=1;
    while (i<=1000)
    {
        if(i%5 == 0)
        {
            cout << "-" << i << endl;
        }
        else
        {
            cout << i << endl;
        }
    i++;
    }
    return 0;
}
