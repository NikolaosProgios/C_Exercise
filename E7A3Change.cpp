#include <iostream>
using namespace std;

class SH{
    int x;
    int y;

public:
    float z;

    SH()    {
        x = y = 0;
    }

    SH(int xy)    {
        x = y = xy;
    }

    SH(int _x, int _y) : x(_x), y(_y)    {

    }

    void setxy(int a, int b)    {
        x = a;
        y = b;
    }

    void getxy(int &a, int &b)    {
        a = x;
        b = y;
    }

    int calculate_area()    {
        return x * y;
    }

    void operator+(int k)    {
        x += k;
        y += k;
    }

    friend int operator*(SH &ob, int k)    {
        ob.x *= k;
        return ob.x;
    }
};

SH operator+(SH &ob1, SH &ob2){
    int x_1, y_1, x_2, y_2;

    ob1.getxy(x_1, y_1);
    ob2.getxy(x_2, y_2);

    return SH(x_1 + x_2, y_1 + y_2);
}

int main()
{
    SH ob2(4, 7), ob1(9), obj;

    obj.setxy(3, 4);

    int a, b;
    obj.getxy(a, b);
    cout << "obj=" << a << " " << b << endl; // 3 4

    ob1.operator+(5); // x:5+9=14  , y:5+9=14
    ob1.getxy(a, b);
    cout << "ob1=" << a << " " << b << endl; // 14 14

    operator*(obj, 7); //
    obj.getxy(a, b);
    cout << "obj=" << a << " " << b << endl; // 21 4

    SH obX;
    obX = operator+(ob2, ob1); //
    obX.getxy(a, b);
    cout << "obX=" << a << " " << b << endl; // 18 21
    
    return 0;
}
