#include<iostream>
using namespace std;
class digits
{
   int n,sum,k,b,c,y;
   public:
   digits()
   {
      n=0;
      sum=0;
      c=0;
      b=0;
      y=0;
   }
   void getdata()
   {
      cout<<"Enter the number: ";
      cin>>n;
   }
   void countdigit()
   {
      int original=n;
      sum=0;
      c=0;
      y=0;
      while(original>0)
      {
         int k=original%10;
         c=c*10+k;
         sum++;
         original=original/10;
      }
      int *a=new int[sum=1];
      while(c>0)
      {
         k=c%10;
         a[y]=k;
         cout<<a[y]<<" ";
         y++;
         c=c/10;
      }
      cout<<endl;
      delete []a;
   }
};
int main()
{
   digits d1;
   d1.getdata();
   d1.countdigit();
   return 0;
}
