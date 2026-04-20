#include<iostream>
using namespace std;
class emf
{
   public:
      float emf1,emf2,emf3;
      emf()
      {
      }
      void gen(float v=220.0,float ra1=1.2,int rse1=6,int rsh=75)
      {
         float ia=5.0;
         emf1=v+ia*(rse1+ra1);
         cout<<"series generator="<<emf1<<endl;
      }
      void gen(double a,double v=220.0,float ra1=1.2,int rse1=6,int rsh=75)
      {
         float ish=v/rsh;
         float ia=a+ish;
         emf2=v+ia*ra1;
         cout<<"shunt generator="<<emf2<<endl;
      }
      void gen(int a1,int a2,double v=220.0,float ra1=1.2,int rse1=6,int rsh=75)
      {
         float ia2=a1+a2;
         emf3=v+ia2*(rsh+rse1);
         cout<<"compound generator="<<emf3<<endl;
      }
};
int main()
{
   emf e1;
   e1.gen();
   e1.gen(2.0);
   e1.gen(2,4);
   return 0;
}
