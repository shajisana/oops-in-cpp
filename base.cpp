#include<iostream>
using namespace std;
class base
{
        public:
                int a;
                virtual void print()
                {
                        a=0;
                        cout<<"a="<<a<<endl;
                }
};
class derive1:public base
{
        public:
                int b;
                void print()
                {
                        b=1;
                        cout<<"b="<<b<<endl;
                }
};
class derive2:public derive1
{
        public:
                int c;
                void print()
                {
                        c=2;
                        cout<<"c="<<c<<endl;
                }
};
class derive3:public derive2
{
        public:
                int d;
                void print()
                {
                        d=3;
                        cout<<"d="<<d<<endl;
                }
};
class derive4:public derive3
{
        public:
                int e;
                void print()
                {
                        e=4;
                        cout<<"e="<<e<<endl;
                }
};
class derive5:public derive4
{
        public:
                int f;
                void print()
                {
                        f=5;
                        cout<<"f="<<f<<endl;
                }
};
int main()
{
        base b1;
        base*bptr;
        bptr=&b1;
        bptr->print();
        derive1 d1;
        bptr=&d1;
        bptr->print();
        derive2 d2;
        bptr=&d2;
        bptr->print();
        derive3 d3;
        bptr=&d3;
        bptr->print();
        derive4 d4;
        bptr=&d4;
        bptr->print();
        derive5 d5;
        bptr=&d5;
        bptr->print();
        return 0;
}
