#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    string friends[5];
    int seed;
    cout << "== Who Should I Text? ==" << endl;
    cout << "Enter seed" << endl;
    cin >> seed;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter friend " << i << endl;
        cin >> friends[i];
    }
    srand(seed);
    int selector = rand() % 5;
    cout << "You should text: " << friends[selector] << endl;
    cout << "These other friends didn't make the cut:" << endl;
    for (int i = 0; i < 5; i++)
    {
       if (i != selector)
       {
           cout << friends[i] << endl;
       }
    }
    return 0;
}
