#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 1, iResult = 0;

    iMask = iMask << 7 - 1;
    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Updated number is : "<<iRet<<'\n';

    return 0;
}
