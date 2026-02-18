#include<iostream>
using namespace std;

class Base1
{
    public:
        int i,j;
        
        Base1()
        {
            cout<<"Inside Base1 Constructor\n";
            i = 0;
            j = 0;
        }

        ~Base1()
        {
            cout<<"Inside Base1 Destructor\n";
        }

        void Fun()
        {
            cout<<"Inside Fun of Base1\n";
        }
};

class Base2
{
    public:
        int x,y;
        
        Base2()
        {
            cout<<"Inside Base2 Constructor\n";
            x = 0;
            y = 0;
        }

        ~Base2()
        {
            cout<<"Inside Base2 Destructor\n";
        }

        void Gun()
        {
            cout<<"Inside Gun of Base2\n";
        }
};

class Derived : public Base1, Base2
{
    public:
        int a,b;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            a = 50;
            b = 60;
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        void Sun()
        {
            cout<<"Inside Derived Sun\n";
        }
};

int main()
{
    Derived dobj;

    cout<<sizeof(Base1)<<"\n";      // 8
    cout<<sizeof(Base2)<<"\n";      // 8
    cout<<sizeof(Derived)<<"\n";    // 24

    return 0;
}