#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo)
{
    UINT iMask = 1, iResult = 0;                       

    iMask = iMask << 7 - 1;
    iMask = ~iMask;
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = ChangeBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}


