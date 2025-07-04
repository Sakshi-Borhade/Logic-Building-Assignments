#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1, iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"Enter the Location : \n";
    cin>>iLocation;

    iRet = ToggleBit(iValue,iLocation);

    cout<<"Updated number is : "<<iRet<<'\n';

    return 0;
}
