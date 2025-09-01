#include<iostream>
using namespace std;

int fibo(int n)
{
    int prev1=1;
    int prev2=0;

      cout << prev2 << " ";
      cout << prev1 << " ";


    for (int i = 3; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
        cout << curr << " ";
    }

    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;

    cout<<"fibonaci series :";
    fibo(n);

    return 0;

}