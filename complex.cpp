#include<iostream>
#include<cmath>
using namespace std;
class complex1
{
   float real,imag;
   public:
   void get()
   {
      cout<<"enter the real part"<<endl;
      cin>>real;
      cout<<"enter imaginary part"<<endl;
      cin>>imag;
   }
   void print()
   {
      if(imag>=0)
      {
         cout<<real<<"+j"<<imag<<endl;
      }
      else
         cout<<real<<"-j"<<-imag<<endl;
   }
   complex1 operator-(complex1 c2)
   {
      complex1 temp;
      temp.real=real-c2.real;
      temp.imag=imag-c2.imag;
      return temp;
   }
   complex1 operator*(complex1 c2)
   {
      float newreal,newimag,newr,newi,newmag,newangle;
      newreal=sqrt((real*real)+(imag*imag));
      newimag=atan2(imag,real);
      newr=sqrt((c2.real*c2.real)+(c2.imag*c2.imag));
      newi=atan2(c2.imag,c2.real);
      newmag=newreal*newr;
      newangle=newimag+newi;
      complex1 temp1;
      temp1.real=newmag*cos(newangle);
      temp1.imag=newmag*sin(newangle);
      return temp1;
          }
};
int main()
{
        complex1 c1;
        c1.get();
        c1.print();
        complex1 c2;
        c2.get();
        c2.print();
        complex1 c3=c1-c2;
        complex1 c4=c1*c2;
        cout<<"after subtraction";
        c3.print();
        cout<<"aftter multiplication";
        c4.print();
        return 0;
}



