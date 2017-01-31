#include<iostream>
using namespace std;

int main()
{
    int arr[20]; int num_nums;
    cout << "How many numbers?" << endl;
    cin >> num_nums;
    for(int counter = 0; counter < num_nums; counter++)
    {
        cout << "Enter number " << counter << endl;
        cin >> arr[counter];
    }
    cout << "You entered: " << endl;
    for (int counter2 = num_nums; counter2 > 0; counter2--)
    {
        cout << arr[(counter2-1)] << endl;
    }
    return 0;
}
