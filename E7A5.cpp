#include <iostream>

using namespace std;

class SH
{
    int x;
    int y;

public:
    float z;

    SH()
    {
        x = y = 0;
    }

    SH(int xy)
    {
        x = y = xy;
    }

    SH(int _x, int _y) : x(_x), y(_y)
    {

    }

    void setxy(int a, int b)
    {
        x = a;
        y = b;
    }

    void getxy(int &a, int &b)
    {
        a = x;
        b = y;
    }

    int calculate_area()
    {
        return x * y;
    }

    void pros(int k)
    {
        x += k;
        y += k;
    }

    friend int pol(SH &ob, int k)
    {
        ob.x *= k;
        return ob.x;
    }

    SH operator^(int k)
    {
        int _x = x, _y = y;

        while(k > 1)
        {
            _x *= x;
            _y *= y;
            k--;
        }

        return SH(_x, _y);
    }

    friend ostream &operator<<(ostream &os, const SH &ob)
    {
        os << ob.x << " --- " << ob.y << endl;
        return os;
    }
};

SH addobs(SH &ob1, SH &ob2)
{
    int x_1, y_1, x_2, y_2;

    ob1.getxy(x_1, y_1);
    ob2.getxy(x_2, y_2);

    return SH(x_1 + x_2, y_1 + y_2);
}

class DerW : public SH
{
    float w;
public:
    DerW() : SH()
    {
        w = 0;
    }

    DerW(int a, int b, float c) : SH(a, b), w(c)
    {
    }

    void setw(float _w)
    {
        w = _w;
    }

    void getw(float &_w)
    {
        _w = w;
    }
};

int main()
{
    DerW G;
    float w;

    G.setxy(2, 3);
    G.setw(7.56);
    G.getw(w);
    cout << G << "G.w = " << w << endl;

    DerW H(4, 6, 16.72);
    H.getw(w);
    cout << H << "H.w = " << w << endl;
    
    return 0;
}
