#include <iostream>
#include<cstring>
using namespace std;
class student
{
    public:
    int reg_no,m1,m2,m3,m4,m5;
    char* name;
    student(int r_no,const char* x,int x1,int x2,int x3,int x4,int x5)
    {
        reg_no=r_no;
        name=new char[strlen(x)+1];
        strcpy(name,x);
        m1=x1;
        m2=x2;
        m3=x3;
        m4=x4;
        m5=x5;
    }
    student(student&a)
    {
        reg_no=a.reg_no;
        name=new char[strlen(a.name)+1];
        strcpy(name,a.name);
        m1=a.m1;
        m2=a.m2;
        m3=a.m3;
        m4=a.m4;
        m5=a.m5;
    }
    void display()
    {
        cout<<"student details:"<<endl<<endl;
        cout<<"register no:"<<reg_no<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"mark1:"<<m1<<endl;
        cout<<"mark2:"<<m2<<endl;
        cout<<"mark3:"<<m3<<endl;
        cout<<"mark4:"<<m4<<endl;
        cout<<"mark5:"<<m5<<endl;
    }
};
int main()
{
    student s(24,"shaji",98,97,96,99,90);
    s.display();
    student s1=s;
    student s2(s);
    s1.display();
    s2.display();
    return 0;
}
