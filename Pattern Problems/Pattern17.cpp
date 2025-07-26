#include<bits/stdc++.h>
using namespace std;

int Pattern17(int n){
    for(int i=0;i < n ; i++)
        {
            char ch = 'A';

            for(int a=0; a < n -i -1; a++)
            {
                cout << " ";     
            }

            for(int j=1; j <= 2*i+1 ; j++)
                {   
                    cout << ch;

                    if(j <= (2*i + 1) / 2 )
                        {
                            ch++;
                        }
                    else ch--;
                }
                cout<<"\n";
        }
}

int main(){
    int n;
    cout << "Enter the numbr of rows\n";
    cin >> n;
    Pattern17(n);
}
