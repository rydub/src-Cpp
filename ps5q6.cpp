#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int beer=99;
    string plural = " bottles ", singular = " bottle ";
    while (beer > 0)
    {
        if(beer == 2)
        {
            cout << beer << plural << "of Pepsi on the wall, " << beer << plural << "of Pepsi.\nTake one down, pass it around, " << beer - 1 << singular << "of Pepsi on the wall." << endl;
            beer--;
        }
        else if (beer == 1)
        {
            cout << beer << singular << "of Pepsi on the wall, " << beer << singular << "of Pepsi.\nTake one down, pass it around, " << beer - 1 << plural << "of Pepsi on the wall." << endl;
            beer--;
        }
        else
        {
            cout << beer << " bottles of Pepsi on the wall, " << beer << " bottles of Pepsi.\nTake one down, pass it around, " << beer - 1 << " bottles of Pepsi on the wall." << endl;
            beer--;
        }
    }
    return 0;
}
