#include<iostream>
using namespace std;
class time
{
   int h,m,s;
   public:
   time(int hh,int mm,int ss)
   {
      h=hh;
      m=mm;
      s=ss;
   }
   time operator++()
   {
      s++;
      if(s>=60)
      {
         s=0;
         m++;
      }
      if(m>=60)
      {
         m=0;
         h++;
      }
      return time(h,m,s);
   }
   time operator++(int)
   {
      s++;
      if(s>=60)
      {
         s=0;
         m++;
      }
      if(m>=60)
      {
         m=0;
         h++;
      }
      return time(h,m,s);
   }
   time operator--()
   {
      s--;
      if(s<0)
      {
         s=59;
         m--;
      }
      if(m<0)
      {
         m=59;
         h--;

      }
      if(h<0)
      {
         h=0;
         m=0;
         s=0;
      }
      return time(h,m,s);
   }
   time operator--(int)
   {
      s--;
      if(s<0)
      {
         s=59;
         m--;
      }
      if(m<0)
      {
         m=59;
         h--;
      }
      if(h<0)
      {
         h=0;
         m=0;
         s=0;
      }
      return time(h,m,s);
   }
   void display()
   {
      cout<<"TIME:"<<h<<" "<<m<<" "<<s<<endl;
   }
};
int main()
{
   time n(1,15,22);
   n.display();
   ++n;
   n.display();
   n++;
   n.display();
   --n;
   n.display();
   n--;
   n.display();
   return 0;
}
