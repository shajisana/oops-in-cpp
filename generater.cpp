#include<iostream>
using namespace std;
class generator
{
   public:
      float ra,vt;
      void print ()
      {
         ra=0.5;
         vt=230.0;
         cout<<"terminal voltage="<<vt<<endl;
      }
};
class series:public generator
{
   public:
      float e;
      void emf(float i1,float r1)
      {
         e=vt+i1*(ra+r1);
         cout<<"emf generated in seies machine"<<e<<endl;
      }
};
class shunt:public generator
{
   public:
      float e1,i2,i3;
      void emf(float i1,float r2)
      {
         i2=vt/r2;
         i3=i1+i2;
         e1=vt+(i3*ra);
         cout<<"emf generated in shunt machine"<<e1<<endl;
      }
};
class comp:public generator
{
   public:
      float e2,i2,i3;
      void emf(float i1,float r1,float r2)
      {
         i2=vt/r1;
         i3=i1+i2;
         e2=vt+i3*(ra+r2);
         cout<<"emf generated in compoud generator "<<e2<<endl;
      }
};
int main()
{
   series s1;
   shunt s2;
   comp c1;
   s1.print();
   s1.emf(20.0,0.2);
   s2.print();
   s2.emf(50.0,120.0);
   c1.print();
   c1.emf(100.0,200.0,0.3);
   return 0;
}
