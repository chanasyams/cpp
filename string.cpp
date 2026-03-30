#include<iostream>
#include<cstring>
using namespace std;
class String
{
   char *str;
   public:
   String()
   {
      str = new char[1];
      str[0] = '\0';
   }
   String(const char *s)
   {
      str = new char [strlen(s)+1];
      strcpy(str,s);
   }
   String(const char *s1 , const char *s2)
   {
      int len= strlen(s1)+ strlen(s2);
      str = new char[len+1];
      strcpy(str,s1);
      strcpy(str,s2);
   }
   char*findvowel(const string p)
   {
      int a = strlen(p.c_str());
      char*vowel = new char[a+1];
      int j=0;
      for(int i=0;p[i]!='\0';i++)
      {
         char ch=p[i];
         if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
         {
            vowel[j]=ch;
            j++;
         }
      }
      vowel[j]='\0';
      return vowel;
   }
   ~String()
   {
      delete[] str;
   }
};
int main()
{
   string p;
   p="SUNSHINE";
   String s1("SUN");
   String s2("SHINE");
   String s3("SUN","SHINE");
   String n1;
   char*vowel = n1.findvowel(p);
   cout<<"THE VOWELS IN THE GIVEN STRING: "<<vowel<<endl;
   return 0;
}
