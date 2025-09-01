#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a digit:";
    cin>>n;
    int d;
    int s=0;
    while(n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }

    cout<<s;
}