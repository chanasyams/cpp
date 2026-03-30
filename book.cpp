#include<iostream>
using namespace std;
class book
{
   int access_no;
   string title;
   int price;
   int copies;
   public:
   book()
   {
      title="";
      access_no=0;
      price=0;
      copies=0;
   }
   ~book()
   {
   }
   void getdata()
   {
      cout<<"Enter the title of the book:";
      cin>>title;
      cout<<"Enter the access number of the book:";
      cin>>access_no;
      cout<<"Enter the price of the number:";
      cin>>price;
      cout<<"Enter the copies of book:";
      cin>>copies;
   }
   int getprice()
   {
      return price;
   }
   int getcopies()
   {
      return copies;
   }
   void printdata()
   {
      cout<<"TITLE:"<<title<<endl;
      cout<<"ACCESS_NUMBER:"<<access_no<<endl;
      cout<<"PRICE:"<<price<<endl;
      cout<<"COPIES:"<<copies<<endl;
   }
};
int main()
{
   int x,y,z;
   book m1;
   m1.getdata();
   x=m1.getprice();
   y=m1.getcopies();
   z=x*y;
   cout<<"Total worth of the book:"<<z;
}
