#include<iostream>
using namespace std;

class Base
{
    public:
        int i;
        int j;

        Base()
        {
            cout<<"Inside Base constructor\n";
            i = 10;
            j = 20;
        }

        ~Base()
        {
            cout<<"Inside Base destructor\n";
        }

        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived : public Base
{
    public:
        int x;
        int y;

        Derived()
        {
            cout<<"Inside Derived constructor\n";   
            x = 30;
            y = 40;
        }

        ~Derived()
        {
             cout<<"Inside Derived destructor\n";
        }

        void Gun()
        {
            cout<<"Inside Derived gun\n";
        }
};

class DerivedX : public Derived
{
    public:
        int a;
        int b;

        DerivedX()
        {
            cout<<"Inside DerivedX constructor\n";
            a = 50;
            b = 60;
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX destructor\n";
        }

        void Sun()
        {
            cout<<"Inside DerivedX Sun\n";
        }
};

int main()
{
    DerivedX dobj;
    // Constructors : Base -> Derived -> DerivedX

    cout<<"Inside main Function\n";

    cout<<"Size of Base class : "<<sizeof(Base)<<"\n";              // 8
    cout<<"Size of Derived class : "<<sizeof(Derived)<<"\n";        // 16    
    cout<<"Size of DerivedX class : "<<sizeof(DerivedX)<<"\n";      // 24

    cout<<dobj.i<<"\n";         // 10 
    cout<<dobj.j<<"\n";         // 20
    cout<<dobj.x<<"\n";         // 30
    cout<<dobj.y<<"\n";         // 40
    cout<<dobj.a<<"\n";         // 50
    cout<<dobj.b<<"\n";         // 60

    dobj.Fun();                 // Inside Base Fun
    dobj.Gun();                 // Inside Derived gun
    dobj.Sun();                 // Inside DerivedX Sun

    // Destructor : DerivedX -> Derived -> Base

    return 0;
}