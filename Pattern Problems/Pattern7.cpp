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

int main(){
    int n;
    cout << "Enter the numbr of rows\n";
    cin >> n;
    Pattern7(n);
}