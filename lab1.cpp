#include <cmath>
#include <iostream>
using namespace std;

class Wektor2D
{
public:
    double x;
    double y;
    void   print() { cout << x << " " << y << endl; }

private:
    friend Wektor2D operator+(const Wektor2D& v1, const Wektor2D& v2);
};

Wektor2D operator+(const Wektor2D& v1, const Wektor2D& v2)
{
    Wektor2D v = v1;
    v.x        = v2.x + v1.x;
    v.y        = v2.y + v1.y;

    return v;
}

int main()
{
    Wektor2D vec1{3.0, 4.6}, vec2{1.3, 2.8};
    Wektor2D v = vec1 + vec2;
    v.print();
}