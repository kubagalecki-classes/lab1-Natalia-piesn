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
        ++num_vec;
        //  cout << num_vec << "\n";
    }
    ~Wektor2D()
    {
        --num_vec;
        cout << num_vec << "\n";
    }
    double x;
    double y;
    double ilo;

    static int populacja() { return num_vec; };
    void       print() { cout << num_vec << "\n"; }

private:
    static int      num_vec;
    friend Wektor2D operator+(const Wektor2D& v1, const Wektor2D& v2);
    friend Wektor2D operator*(const Wektor2D& v1);
    //   friend std ::ostream& operator<<(std ::ostream& s, const Wektor2D& v1);
};

int Wektor2D::num_vec = 0;

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
/*
std::ostream& operator<<(std::ostream& s, const Wektor2D& v)
{
    return s << '<' << v.x << ',' << v.y << '>';
}
*/
int main()
{
    Wektor2D vec1(3.0, 4.0), vec2(1.0, 2.0);
    cout << vec1.populacja() << "\n";
    Wektor2D v(0, 0);
    cout << vec1.populacja() << "\n";
    Wektor2D v1{(1.0, 4.0)};
    cout << vec1.populacja() << "\n";
}