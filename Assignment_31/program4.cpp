#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 1, iMask2 = 1, iResult = 0;                       

    iMask1 = iMask1 << 7 - 1;
    iMask2 = iMask2 << 10 - 1;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;
    
    iResult = iNo ^ (iMask1 ^ iMask2);

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}