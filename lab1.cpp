#include <cmath>
#include <iostream>
using namespace std;

struct Informer
{
    Informer() { cout << "Constructed! \n"; }
    ~Informer() { cout << "Deconstructed! \n"; }
};

struct Wektor2D
{
    Wektor2D(double a, double b)
    {
        x = a;
        y = b;
        cout << a << "," << b << " created\n";
    }
    ~Wektor2D() { cout << x << "," << y << " deleted\n"; }

    Informer A;

    double x;
    double y;
    // void   norm() { cout << sqrt(x * x + y * y) << "\n"; }
    // void   print() { cout << "(" << x << "," << y << ") \n"; }
};

int main()
{
    Wektor2D vector1{3.5, 2.5};
    Wektor2D vector2{-2, 0.4};
    //  Wektor2D vector3{-5, 0};
}