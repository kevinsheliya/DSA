#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

    for(int i = 0;i<n;i++)
    { 
        //space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //num1
        for(int j=1;j<=i+1;j++)
        {
            cout<<j;
        }

        //num2
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}