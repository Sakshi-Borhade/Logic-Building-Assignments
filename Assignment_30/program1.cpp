#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x00004000, iResult = 0;                       

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
        cout<<"15th bit is on \n";                                
    }
    else
    {
        cout<<"15th bit is off \n";
    }

    return 0;
}
