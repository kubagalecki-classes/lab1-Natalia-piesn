#include <cmath>
#include <iostream>
using namespace std;

class Wektor2D
{

public:
    Wektor2D(double a = 0, double b = 0)
    {
        x = a;
        y = b;
    }
    double x;
    double y;
    double ilo;
    void   print() { cout << x << " " << y << endl; }

private:
    friend Wektor2D operator+(const Wektor2D& v1, const Wektor2D& v2);
    friend Wektor2D operator*(const Wektor2D& v1);
};

Wektor2D operator+(const Wektor2D& v1, const Wektor2D& v2)
{
    Wektor2D v = v1;
    v.x        = v2.x + v1.x;
    v.y        = v2.y + v1.y;

    return v;
}

Wektor2D operator*(const Wektor2D& v2, const Wektor2D& v1)
{
    Wektor2D B;
    B.ilo = v2.x * v1.x + v2.y * v1.y;
    return B;
}

int main()
{
    Wektor2D vec1(3.0, 4.0), vec2(1.0, 2.0);
    Wektor2D v = vec1 + vec2;
    v.print();
    Wektor2D v1;
    v1 = vec1 * vec2;
    cout << v1.ilo << endl;
}