#include<bits/stdc++.h>
using namespace std;


void Pattern11(int n) {
	// Write your code here.
int i,j;
    for(i = 0;i <= n; i++){

        for(j = 0;j <i; j++){
            if(j % 2 == 0)
                {
                    cout << "1";
                }
            else{ cout << "0";}
        }
    cout << "\n";
    }
}
int main(){

    int n;
    cout << "Enter the Number of rows and columns";
    cin >> n;

    Pattern11(n);
    return 0;
}