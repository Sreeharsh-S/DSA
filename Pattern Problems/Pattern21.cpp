#include<bits/stdc++.h>
using namespace std;

int Pattern21(int n)
{
    for(int i=0 ; i < n ; i++)
    {
        cout << "*";
    }
    cout << endl;
    for(int i=1 ; i < n-1 ; i++)
    {
        for(int j=0 ; j < n ; j++)
        {
            if(j==0 || j==n-1)
            {
                cout << "*";
            }
            else{cout << " ";}
        }
    cout << endl;
    }
    for(int i=0 ; i < n ;i++)
    {
        cout << "*";
    }

return 0;
}

int main()
{
    int n;
    cout << "Enter the dimention of the square::";
    cin >> n;
    Pattern21(n);
return 0;
}