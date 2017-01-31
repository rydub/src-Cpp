#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

//ifstream dictionary;
//string user_input;

//bool spell_check(string user_input)
//{
//    bool flag = false;
  //  string word;
    //while(!dictionary.eof())
      //  {
        //    dictionary >> word;
            //(dictionary, word);
          //  if (user_input.compare(word) == 0)
            //{
              //  flag = true;
                //return flag;
            //}
       // }
   // return flag;
//}
int main()
{
// Initialize fstream
    ifstream dictionary;
    dictionary.open("dict.txt");
//Check for file
    if(!dictionary)
    {
        cout << "Error, dictionary file not found." << endl;
        return 0;
    }
    string user_input, checker;
//main loop, takes input, performs check, produces result
    do
    {
        bool flag = false;
        cout << "Enter word to spellcheck (or exit to end)" << endl;
        getline(cin, user_input);
//ending parameter
        if (user_input == "exit")
        {
            cout << "Ending program..." << endl;
            dictionary.close();
            return 0;
        }
    //flag = spell_check(user_input);

//Spell checking loop
        while(!dictionary.eof())
        {
            getline(dictionary, checker);
            //cout << "Checking: " << checker << " with " << user_input << ". val is: " << user_input.compare(checker) << endl;
            //if(!strncmp(user_input, checker))
            if(user_input.compare(checker) == 0)
            //if(user_input == checker)
            {
                //cout << "success" << endl;
                flag = true;
                break;
            }
            //cout << "running" << user_input.compare(checker) << endl;
        }

// Result
        if (flag)
        {
            cout << user_input << " is spelled correctly." << endl;
        }
        else
        {
            cout << user_input << " is not spelled correctly." << endl;
        }
        dictionary.clear();
        dictionary.seekg(0);
    } while (user_input != "exit");
}
