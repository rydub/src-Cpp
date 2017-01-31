#include<iostream>
using namespace std;

int main()
{
int num = 33;
for (char counter = '!'; counter <= '~'; counter++)
{
    cout << num << " " << counter << endl;
    num++;
}
return 0;
}
