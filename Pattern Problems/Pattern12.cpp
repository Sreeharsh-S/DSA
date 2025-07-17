#include<bits/stdc++.h>
using namespace std;

void Pattern12(int n){
    
    for(int i=1;i <= n ;i++)
        {
            for(int j=1;j <= i; j++)
                {
                    cout << j;
                }
            
            for(int k=1; k<=n-i ;k++)
                {
                    cout << " ";
                }
                
            
            for(int l = n-i ;l >0 ; l--)
                {
                    cout << " ";
                }
            
            for(int m=0;m < i; m++)
                {
                    cout << i-m;
                }
                cout << "\n";
            
        }       
}
 int main(){
    int n;
    cout << "Enter the value for n\n";
    cin >> n;
    Pattern12(n);
 }