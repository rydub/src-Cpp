#include <iostream>
using namespace std;

int main()
{
  int big_number;
  big_number = 2147483647;
  //Data types have limits
  cout << big_number << endl;
  big_number = big_number + 1;
  //This line will roll over to smallest neg. int
  cout << big_number << endl;
  return 0;
}
