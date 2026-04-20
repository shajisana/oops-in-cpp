#include <iostream>
using namespace std;
class frd1
{
     int a;
public:
     frd1(int x)
     {
        a = x;
    }
    friend class frd2;
};
class frd2
{
     int b;
public:
    frd2(int y)
    {
        b = y;
    }
    int add(frd1& objP)
    {
        return objP.a + b;
    }

    int multiply(frd1& objP)
    {
        return objP.a * b;
    }
};

int main()
{
    frd1 objP(70);
    frd2 objQ(89);
    int sum = objQ.add(objP);
    int product = objQ.multiply(objP);
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    return 0;
}
