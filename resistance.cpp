#include<iostream>
#include<cstring>
class string
{
   char * str;
   public:
   string()
   {
      str=new char[1];
      str[0]='\0';
   }
   string(const char * s)
   {
      str=new char[strlen(s)+1];
      strcpy(str,s);
   }
   string(const char*s1,const char*s2)
   {
      str=new char[strlen(s1)+strlen(s2)+1];
      strcpy(str,s1);
      strcat(str,s2);
   }
   ~string()
   {
      delete [] str;
   }
   void display()
   {
      std::cout<<str<<std::endl;
   }
};
int main()
{
   string s1;
   s1.display();
   string s2("hello");
   s2.display();
   string s3("hello","world");
   s3.display();
   return 0;
}
