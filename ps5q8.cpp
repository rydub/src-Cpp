#include<iostream>
using namespace std;
 int main()
 {
     int option;
     while (option != 0)
     {
         cout << "Which direction would you like to move?" << endl;
         cout << "[8] North\n[4] West\n[2] South\n[6] East\n[0] Exit" << endl;
         cin >> option;
         if (option == 8)
         {
             cout << "You moved north." << endl;
         }
         else if (option == 4)
         {
             cout << "You moved west." << endl;
         }
         else if (option == 2)
         {
             cout << "You moved south." << endl;
         }
         else if (option == 6)
         {
             cout << "You moved east." << endl;
         }
     }
     return 0;
 }
