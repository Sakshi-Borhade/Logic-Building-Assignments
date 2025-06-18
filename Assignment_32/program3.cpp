#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1, iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    UINT iRet = 0;

    cout<<"Enter the number \n";
    cin>>iValue;

    cout<<"Enter thr location \n";
    cin>>iLocation;

    iRet = ChangeBit(iValue,iLocation);

    cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}

