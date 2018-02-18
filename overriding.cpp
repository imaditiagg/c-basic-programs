// CPP program to illustrate
// Function Overriding
#include<iostream>
using namespace std;
 
class Base
{
public:
    void Display()
    {
        cout << "\nThis is Display() method"
                " of BaseClass";
    }
};
 
class Derived: public Base
{
public:

    void Display()
    {
    	Base :: Display();
        cout << "\nThis is Display() method"
               " of DerivedClass";
    }
};
 
int main()
{
    Derived d;
    Base b;
    cout<<"\nCalled by base class object";
    b.Display();
    cout<<"\n\nCalled by derived class object";
    d.Display();
}
