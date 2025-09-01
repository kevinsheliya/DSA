#include <iostream>
using namespace std;

int binary(int digit)
{
    int rem;
    int pow=1;
    int ans = 0;
    while(digit!=0)
    {
        rem=digit%2;
        digit=digit/2;
        ans+=(rem*pow);
        pow=pow*10;

    }
    return ans;
}

int main()
{
    int digit;
    cout<<"enter a digit:";
    cin>>digit;

    for(int i=1;i<=digit;i++)
    {
        cout<<binary(i)<<endl;
    }
    
    return 0;
}