#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x000001e0, iResult = 0;                       

    iResult = iNo & iMask;

    return (iResult == iMask);
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)                                        
    {    
        cout<<"7th, 8th, 9th bit is on \n";                                
    }
    else
    {
        cout<<"7th, 8th, 9th bit is off \n";
    }

    return 0;
}

