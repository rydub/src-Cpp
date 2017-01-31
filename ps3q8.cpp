#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << fixed;
    double x;
    double y;
    cout << "== Zelda (version 0.000001) ==" << endl;
    cout << "What is the position of our hero, Link?" << endl;
    cout << "Enter X and Y coordinates separated by a space" << endl;
    cin >> x >> y;
    double swordx;
    double swordy;
    double heartx;
    double hearty;
    double triforcex;
    double triforcey;
    double sworddist;
    double heartdist;
    double triforcedist;
    swordx = 5.0;
    swordy = 3.0;
    heartx = -3.125;
    hearty = 0;
    triforcex = 1.5;
    triforcey = 8.1;
    sworddist = sqrt(pow((x - swordx), 2) + pow((y - swordy), 2));
    heartdist = sqrt(pow((x - heartx), 2) + pow((y - hearty), 2));
    triforcedist = sqrt(pow((x - triforcex), 2) + pow((y - triforcey), 2));
    cout << "Sword is at (5.0, 3.0).  Distance from: " << setprecision(1) << sworddist << endl;
    cout << "Heart is at (-3.125, 0).  Distance from: " << setprecision(1) << heartdist <<endl;
    cout << "Triforce is at (1.5, 8.1).  Distance from: " << setprecision(1) << triforcedist <<endl;

    return 0;
}
