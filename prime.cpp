#include<iostream>
using namespace std;

bool is_prime(int num)
{
    if (num == 1)
    {
        return false;
    }
    else
    {
    int x=2;
    while (x < num)
    {
        if (num % x == 0)
        {
            return false;
        }
        else;
        {
            x++;
        }
    }
    return true;
    }
}
