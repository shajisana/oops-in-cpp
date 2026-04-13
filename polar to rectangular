#include<iostream>
#include<cmath>
using namespace std;
class rect;
class polar
{
        float c,d;
        public:
                polar(float a,float b)
                {
                        c=a;
                        d=b;
                }
                float mag()
                {return c;
                }
                float theta()
                {return d;
                }
};
class rect
{
        float real,imag;
        public:
                rect (polar p)
                {
                        float pol=p.mag();
                        float angle=p.theta();
                        real=pol*cos(angle);
                        imag=pol*sin(angle);
                }
                void print()
                {
                        cout<<real<<"+j"<<imag<<endl;
                }
};
int main()
{
        float p,t;
        cout<<"magnitude:"<<endl;
        cin>>p;
        cout<<"angle:"<<endl;
        cin>>t;
        t=t*(3.14/180);
        polar p1(p,t);
        rect r1=rect(p1);
        r1.print();
        return 0;
}
