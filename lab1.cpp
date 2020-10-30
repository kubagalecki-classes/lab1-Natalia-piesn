#include <cmath>
#include <iostream>
using namespace std;

struct Wektor2D
{
    double x;
    double y;
    void   norm() { cout << sqrt(x * x + y * y) << "\n"; }
    void   print() { cout << "(" << x << "," << y << ") \n"; }
};

int main()
{
    Wektor2D vector1;
    vector1.x = 3.5;
    vector1.y = 5.5;
    vector1.norm();
    vector1.print();
}