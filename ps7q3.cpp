#include<iostream>
using namespace std;

int main()
{
// Initialization
    const int length = 20;
    char answer_key[length] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
    int question_number;
    bool mark[length];
    int correct = 0, incorrect = 0;
    cout << "Driver's License Exam Grader" << endl;
    char student_response[length];
//Create Response array
    for (int i = 0; i < 20; i++)
    {
        cout << "Enter your answer for question " << i + 1 << endl;
        cin >> student_response[i];
        while (!(student_response[i] == 'A' || student_response[i] == 'B' || student_response[i] == 'C' || student_response[i] == 'D'))
        {
            cout << "Invalid input.  Enter only: A, B, C, or D.  Try again." << endl;
            cout << "Enter your answer for question " << i + 1 << endl;
            cin >> student_response[i];
        }
    }
//Create score array, tally correct/incorrect
    for (int n = 0; n < 20; n++)
    {
        if (answer_key[n] == student_response[n])
        {
            mark[n] = true;
            correct++;
        }
        else
        {
            mark[n] = false;
            incorrect++;
        }
    }
//Output results
    for(int i = 0; i < 20; i++)
    {
        if(mark[i] == false)
        {
        cout << "Answer " << i + 1 << " is incorrect." << endl;
        }
    }
    cout << "Results (minimum 15 correct to pass):" << endl;
    cout << "You got " << correct << " correct." << endl;
    cout << "You missed " << incorrect << "." << endl;
    if (correct >= 15)
    {
        cout << "You've passed!" << endl;
    }
    else
    {
        cout << "You've failed." << endl;
    }
    return 0;
}
