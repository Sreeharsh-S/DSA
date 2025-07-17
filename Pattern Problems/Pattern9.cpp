#include<bits/stdc++.h>
using namespace std;

int Pattern7(int n){
    
    for(int i=0;i < n ; i++)
        {   int s = n-i-1;
            for(int a=0; a < s; s--)
            {
                cout << " ";
                
            }

            for(int j=1; j <= 2*i+1 ; j++)
                {
                    cout << "*";
                }
                cout<<"\n";
        }
}

int Pattern8(int n){
    
    for(int i=0;i < n ; i++)
        {   int s=n;
            for(int a=0; a < i; a++)
            {
                cout << " ";
                
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
    Pattern7(n);
    Pattern8(n);
}