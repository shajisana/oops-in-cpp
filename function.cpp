#include <iostream>
using namespace std;
class multi
{
    int a;
public:
    multi(int x)
    {
        a=x;
    }
    friend multi operator*( multi& obj, int n);
    friend multi operator*(int n, multi& obj);

    void display()
    {
        cout << " " << a << endl;
    }
};
multi operator*(multi& obj, int n)
{
    return multi(obj.a * n);
}
multi operator*(int n, multi& obj)
{
    return multi(n * obj.a);
}
int main()
{
    multi m1(24);
    multi ans1 = m1 * 9;
    cout << "Result of m1 * 9: ";
    ans1.display();
    multi ans2 = 7 * m1;
    cout << "Result of 7 * m1: ";
    ans2.display();
    multi m2(7);
    multi ans3 = m2 * 6;
    cout << "Result of m2 * 6: ";
    ans3.display();
    return 0;
};
