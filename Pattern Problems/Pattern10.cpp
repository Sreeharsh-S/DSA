#include<bits/stdc++.h>
using namespace std;


void Patten2(int n) {
	// Write your code here.
int i,j;
    for(i = 0;i < n; i++){

        for(j = 0;j <i; j++){
            cout << "*";
        }
    cout <<"\n";
    }
}

void Pattern5(int n) {
	// Write your code here.
int i,j;
    for(i = 0;i < n; i++){

        for(j = 0;j <n-i; j++){
            cout << "*";
        }
    cout <<"\n";
    }
}
int main(){

    int n;
    cout << "Enter the Number of rows and columns";
    cin >> n;

    Patten2(n);
    Pattern5(n);
    return 0;
}