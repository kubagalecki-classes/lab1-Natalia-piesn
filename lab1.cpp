#include <cmath>
#include <iostream>
using namespace std;

struct Wektor2D
{
public:
    void   setX(double a) { x = a; }
    double getX() { return x; }

    void   setY(double a) { y = a; }
    double getY() { return y; }

private:
    double x;
    double y;
};

int main()
{
    Wektor2D vec1;
    vec1.setX(3.5);
    vec1.setY(4.5);

    cout << vec1.getX() << " " << vec1.getY() << "\n";
    // not posiible to run, as x is private: cout << vec1.x;
}