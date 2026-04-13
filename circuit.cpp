#include<iostream>
using namespace std;
class circuit
{
    float i;
    int v;
public:
    circuit()
    {
        v=220;
        i=0;
    }
    void resistance(int r1)
    {
        i=v/r1;
        cout<<"Circuit 1:"<<endl;
        cout<<"Total current: "<<i<<endl;
    }
    void resistance(int r1, int r2)
    {
        int i1=v/r1;
        int i2=v/r2;
        int i=i1+i2;
        cout<<"Circuit 2:"<<endl;
        cout<<"Total current:"<<i<<endl;
        cout<<"Current through R1:"<<i1<<endl;
        cout<<"Current through R2:"<<i2<<endl;
    }
    void resistance(int r1, int r2, int r3)
    {
        int i1=v/r1;
        int i2=v/r2;
        int i3=v/r3;
        int i=i1+i2+i3;
        cout<<"Circuit 3:"<<endl;
        cout<<"Total current:"<<i<<endl;
        cout<<"Current through R1:"<<i1<<endl;
        cout<<"Current through R2:"<<i2<<endl;
        cout<<"Current through R3:"<<i3<<endl;
    }
};
int main()
{
    circuit c;
    c.resistance(100);
    c.resistance(45, 200);
    c.resistance(15, 25, 35);
    return 0;
}
