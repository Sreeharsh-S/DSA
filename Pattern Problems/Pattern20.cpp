#include<bits/stdc++.h>
using namespace std;

int Pattern20(int n)
{   
    
    //top half
    int iniS = n*2 - 2;
    for(int i=1 ; i < n ; i++)
    {
        //stars
        for(int j=0 ; j < i ; j++)
        {
            cout << "*";
        }
        //space
        for(int k=0 ; k < iniS ;k++)
        {
            cout << " ";
        }
        //stars
        for(int l=0 ; l < i ; l++)
        {
            cout << "*";
        }
        
        iniS -= 2;
        cout << endl;
    }
    

    //bottom half
    iniS = 0;
    for(int i = 0 ; i < n ; i++)
    {  
        //stars
        for(int j =0; j < n-i ;j++)
        {
            cout << "*";
        }
        //space
        for(int k=0 ; k < iniS ; k++)
        {
            cout << " ";
        }
        //stars
        for(int l=0 ; l < n-i; l++)
        {
            cout << "*";
        }
        iniS += 2 ;
        cout << endl;
    }


return 0;
}

int main()
{
    int n;
    cout << "Enter a no ::";
    cin >> n;
    Pattern20(n);
    return 0;
}
