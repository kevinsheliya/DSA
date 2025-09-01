#include<iostream>
using namespace std;

int decimal(int b)
{
    int ans=0;
    int pow=1;

    while (b!=0)
    {
        int r=b%10;
        ans +=(r*pow);

        b=b/10;
        pow=pow*2;
    }

    return ans;
    
}

int main()
{
    int b;
    cout<<"enter a binary number:";
    cin>>b;

    cout<<"Decimal number:"<<decimal(b)<<endl;
    return 0;
}