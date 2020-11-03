
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