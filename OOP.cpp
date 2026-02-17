#include<iostream>
using namespace std;

class Arithmetic
{
    public:
        int iNo1, iNo2;

        Arithmetic(int Value1, int Value2)
        {
            iNo1 = Value1;
            iNo2 = Value2;
        }

        int Addition()
        {
            int iResult = 0;
            iResult = iNo1 + iNo2;
            return iResult;
        }
        
        int Subtraction()
        {
            int iResult = 0;
            iResult = iNo1 - iNo2;
            return iResult;
        }
};

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    cout<<"Enter First Number : \n";
    cin>>iValue1;
    
    cout<<"Enter Second Number : \n";
    cin>>iValue2;

    Arithmetic aobj(iValue1, iValue2);

    iRet = aobj.Addition();
    cout<<"Addition is : "<<iRet<<"\n";
    
    iRet = aobj.Subtraction();
    cout<<"Subtraction is : "<<iRet<<"\n";

    return 0;
}