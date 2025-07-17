#include<bits/stdc++.h>
using namespace std;

int Pattern8(int n){
    
    for(int i=0;i < n ; i++)
        {   int s=n;
            for(int a=0; a < i; a++)
            {
                cout << "@";
                
            }

            for(int j=0; j < (2*s-1)-(2*i) ; j++)
                {
                    cout << "*";
                }
                cout<<"\n";
                
        }
}

int main(){
    int n;
    cout << "Enter the numbr of rows\n";
    cin >> n;
    Pattern8(n);
}