#include<iostream>
using namespace std;

int main()
{
    float nums[20];
    int quantity;
    float running_sum = 0;
    cout << "How many numbers do you want? (max 20)" << endl;
    cin >> quantity;
    if (quantity > 20 || quantity < 0)
    {
        cout << "Invalid size.  Ending." << endl;
        return 0;
    }
    else
    {
        for (int i = 0; i < quantity; i++)
        {
            cout << "Enter value " << i << ":" << endl;
            cin >> nums[i];
            running_sum = running_sum + nums[i];
        }
    float average = (running_sum/quantity);
    cout << "Average: " << average << endl;
    cout << "You entered: " << endl;
    for (int i = 0; i < quantity; i++)
    {
        cout << nums[i] << endl;
    }
    }
    return 0;
}
