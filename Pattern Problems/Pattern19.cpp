#include<bits/stdc++.h>
using namespace std;


void nForest(int n) {
	// Write your code here.
int i,j;
    for(i = 0;i < n; i++){

        for(j = 0;j <n-i; j++){
            cout << "*";
        
        for(int j=1; j <= 2*i+1 ; j++)
                {
                    cout << "*";
                }
                cout<<"\n";
        
        for(j = 1;j <n-i+1; j++){
            cout << j;    }
    cout <<"\n";
    }
}}
int main(){

    int n;
    cout << "Enter the Number of rows and columns";
    cin >> n;

    nForest(n);
    return 0;
}