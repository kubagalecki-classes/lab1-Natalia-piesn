
#include <iostream>
using namespace std;

class Wektor2D
{
public:
    Wektor2D()
    {
        x = 0;
        y = 0;
    }
    Wektor2D(double a, double b)
    {
        x = a;
        y = b;
    }
    void   setX(double a) { x = a; }
    void   setY(double b) { y = b; }
    double getX() { return x; }
    double getY() { return y; }
    ~Wektor2D() {}

private:
    double          x;
    double          y;
    friend Wektor2D operator+(const Wektor2D& v1, const Wektor2D& v2);
    friend double   operator*(const Wektor2D& v1, const Wektor2D& v2);
};

Wektor2D operator+(const Wektor2D& v1, const Wektor2D& v2)
{
    Wektor2D v = v1;
    v.x        = v2.x + v1.x;
    v.y        = v2.y + v1.y;
    return v;
}

double operator*(const Wektor2D& v2, const Wektor2D& v1)
{
    return v2.x * v1.x + v2.y * v1.y;
}

/*
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


Wektor2D operator*(const Wektor2D& v2, const Wektor2D& v1)
{
    Wektor2D B;
    B.ilo = v2.x * v1.x + v2.y * v1.y;
    return B;
}


std::ostream& operator<<(std::ostream& s, const Wektor2D& v)
{
    return s << '<' << v.x << ',' << v.y << '>';
}
*/

int main()
{
    Wektor2D v1{};
    v1.setX(1.); // setter
    v1.setY(1.);
    double x1 = v1.getX(); // getter
    double y1 = v1.getY();

    cout << x1 << " " << y1 << "\n";

    Wektor2D v2{2., 2.};
    Wektor2D sum = v1 + v2;
    cout << v2.getX() << v2.getY() << "\n";
    cout << sum.getX() << sum.getY() << "\n";

    double pom = v1 * v2;
    cout << pom << "\n";
    // double prod = v1 * v2;
    /*
    Wektor2D A = Wektor2D::kart(3, 0);
    cout << Wektor2D::populacja() << "\n";
    Wektor2D B = Wektor2D::bieg(10, 1);
    // cout << Wektor2D::populacja() << "\n";
    // Wektor2D v1{(1.0, 4.0)};
    // cout << Wektor2D::populacja() << "\n";
    */
}