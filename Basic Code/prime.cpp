#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i=2;
    while(i<=n-1)
    {
        if(n%i==0)
        {
            cout << n << " is not a prime number." << endl;
            return 0;
        }        
        else
        {
            cout << n << " is a prime number." << endl;
            return 0;
        }
        i++;

    }
}

