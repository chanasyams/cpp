#include<iostream>
#include<string>
using namespace std;
class student
{
      string name;
      int roll_number;
      int mark;
   public:
      void getdata()
      {
         cout<<"ENTER NAME:"<<endl;
         cin>>name;
         cout<<"ENTER ROLL NUMBER:"<<endl;
         cin>>roll_number;
         cout<<"ENTER MARK:"<<endl;
         cin>>mark;
      }
      void display()
      {
         cout<<"NAME:"<<name<<endl;
         cout<<"ROLL NUMBER:"<<roll_number<<endl;
         cout<<"MARK:"<<mark<<endl;
      }
};
int main()
{
   student s1;
   s1.getdata();
   s1.display();
   return 0;
}
