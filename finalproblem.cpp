#include<iostream>
#include<fstream>
using namespace std;

int main()
{
//Initialize variables.
   int LENGTH;
   string checkword;
   ifstream dictionary;
   bool flag = false;

//Sinlge iteration of I/O
   cout << "Enter a word length" << endl;
   cin >> LENGTH;
   cout << "Here are words of length " << LENGTH << endl;
   dictionary.open("dict.txt");
//Input Validation
   if(!dictionary)
    {
        cout << "Error, dictionary file not found." << endl;
        return 0;
    }
//Checking function
   while (!dictionary.eof())
   {
       getline(dictionary, checkword);
       if (checkword.length() == LENGTH)
        {
            cout << checkword << endl;
            flag = true;
        }
   }

//If no words are found, let 'em know.
   if (!flag)
        cout << "No words found" << endl;
    dictionary.close();
    return 0;
}
