#include <iostream>
using namespace std;

// forward declaration:

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    // individually declaring functions as friends:
    // friend int calculator ::sumRealcomplex(complex, complex);
    // friend int calculator ::sumcompcomplex(complex, complex);
    // aliter : declaring the entire calculator class as friend:
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << " i " << endl;
    }
};

int calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(3, 6);

    calculator calc;
    int res = calc.sumRealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcompcomplex(o1, o2);
    cout << "the sum of complex part of o1 and o2 is " << resc << endl;

    return 0;
}