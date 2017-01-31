#include<cstring>
#include<fstream>
using namespace std;

int count_the_word(string filename, string word)
{
    ifstream data_store;
    string this_word;
    int result = 0;
    data_store.open(filename.c_str());
    while (!data_store.eof())
    {
        data_store >> this_word;
        if(this_word == word)
        result ++;
    }
    return result;
}
