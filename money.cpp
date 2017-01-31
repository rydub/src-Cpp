#include<cmath>
using namespace std;

float future_value(float current, float interest, float years)
{
    float result = current*pow((interest+1), years);
    return result;
}
