#include<bits/stdc++.h>
using namespace std;

// Pattern 22 P.S if founded confusing refer striver

int Pattern22(int n)
{
    for(int i = 0; i < 2*n -1 ; i++)
    {
        for(int j = 0 ; j < 2 * n-1 ; j++)
        {
            int up = i;
            int down = (2*n - 2 ) -i;
            int left = j;
            int right = (2*n - 2 ) -j;

            cout << n - min(min(up,down),min(right,left));
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int num;
    cout << "Enter the dimention::" ;
    cin >> num ;
    Pattern22(num);
    return 0;
}