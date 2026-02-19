#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1, No2;

        Demo(int A, int B)
        {
            No1 = A;
            No2 = B;
        }

        //void Display(Demo *this, int x)
        void Display(int x)
        {
            cout<<"Value of No1 : "<<No1<<"\n";
            cout<<"Value of No2 : "<<No2<<"\n";
            cout<<"Value of X : "<<X<<"\n";
        }
};

int main
{
    Demo obj(11,21);

    obj.Display(51);        // Display(&obj,51);

    return 0;
}