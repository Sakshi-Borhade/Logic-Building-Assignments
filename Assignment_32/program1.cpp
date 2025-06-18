#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1, iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    cout<<"Enter the number \n";
    cin>>iValue;

    cout<<"Enter thr location \n";
    cin>>iLocation;

    bRet = ChkBit(iValue,iLocation);

    if(bRet == true)
    {
        cout<<"Bit is on at location "<<iLocation<<"\n";
    }
    else
    {
        cout<<"Bit is off at location "<<iLocation<<"\n";
    }

    return 0;
}
