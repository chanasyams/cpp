#include <iostream>
using namespace std;

template <class L>
void large(L x, L y, L z)
{
    if (x > y && x > z)
    {
        cout << "x is bigger...\n THE VALUE OF X: " << x << endl;
    }
    else if (y > x && y > z)
    {
        cout << "y is bigger...\n THE VALUE OF Y: " << y << endl;
    }
    else
    {
        cout << "z is bigger...\n THE VALUE OF Z: " << z << endl;
    }
}

int main()
{
    large<int>(11, 23, 15);
    large<float>(2.34f, 1.02f, 1.99f);
    large<char>('m', 'k', 'A');
    return 0;
}


#include <iostream>
using namespace std;
template <class T>
class Stack
{
   private:
      T arr[10];
      int top;
   public:
      Stack()
      {
         top = -1;
      }
      void push(T val)
      {
         if (top == 9)
         {
            cout << "STACK OVERLOAD: CANNOT PUSH " << val << endl;
         }
         else
         {
            arr[++top] = val;
            cout << "PUSHED: " << val << endl;
         }
      }
      T pop()
      {
         if (top == -1)
         {
            cout << "STACK UNDERFLOW: NO ELEMENT TO POPPED" << endl;
            return T();
         }
         else
         {
            cout << "POPPED: " << arr[top] << endl;
            return arr[top--];
         }
      }
      T peek()
      {
         if (top == -1)
         {
            cout << "STACK IS EMPTY..." << endl;
            return T();
         }
         else
         {
            return arr[top];
         }
      }
};
int main()
{
    Stack<int> intStack;
    intStack.push(5);
    intStack.push(10);
    cout << "TOP ELEMENT IN INT STACK: " << intStack.peek() << endl;
    intStack.pop();
    intStack.pop();
    intStack.pop();

    cout << endl;

    Stack<float> floatStack;
    floatStack.push(3.14f);
    floatStack.push(1.618f);
    cout << "TOP ELEMENT IN FLOAT STACK: " << floatStack.peek() << endl;
    floatStack.pop();
    floatStack.pop();
    floatStack.pop();

    return 0;
}
