#include<bits/stdc++.h>
using namespace std;


void Pattern18(int n) {
	// Write your code here.
int i,j;
    for(i = 1;i <= n; i++){
        char a ='A' +n -i ;
        for(j = 0;j <i; j++)
        {  

            cout << " " << a;
            a++; 
        }
    cout << "\n";
    }
}
int main(){

    int n;
    cout << "Enter the Number of rows and columns";
    cin >> n;

    Pattern18(n);
    return 0;
}