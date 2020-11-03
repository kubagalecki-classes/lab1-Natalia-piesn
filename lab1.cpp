#include <cmath>
#include <iostream>
using namespace std;

class Wektor2D
{
public:
    static Wektor2D kart(double a, double b)
    {
        Wektor2D B{};
        B.x = a;
        B.y = b;
        B.print();
        return B;
    }

    static Wektor2D bieg(double a, double b)
    {
        Wektor2D B{};
        B.x = a * cos(b);
        B.y = a * sin(b);
        B.print();
        return B;
    }

    ~Wektor2D()
    {
        --num_vec;
        cout << num_vec << "\n";
    }
    static int populacja() { return num_vec; };
    void       print() { cout << x << " " << y << "\n"; }

private:
    Wektor2D(double a = 0, double b = 0)
    {
        x = a;
        y = b;
        ++num_vec;
        cout << num_vec << "\n";
    }

    double x;
    double y;

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

/*
Wektor2D operator*(const Wektor2D& v2, const Wektor2D& v1)
{
    Wektor2D B;
    B.ilo = v2.x * v1.x + v2.y * v1.y;
    return B;
}
*/
/*
std::ostream& operator<<(std::ostream& s, const Wektor2D& v)
{
    return s << '<' << v.x << ',' << v.y << '>';
}
*/
int main()
{
    cout << Wektor2D::populacja() << "\n";
    Wektor2D A = Wektor2D::kart(3, 0);
    cout << Wektor2D::populacja() << "\n";
    Wektor2D B = Wektor2D::bieg(10, 1);
    // cout << Wektor2D::populacja() << "\n";
    // Wektor2D v1{(1.0, 4.0)};
    // cout << Wektor2D::populacja() << "\n";
}