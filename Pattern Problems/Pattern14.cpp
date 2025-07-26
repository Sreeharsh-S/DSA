#include<bits/stdc++.h>
using namespace std;


void Pattern14(int n) {
	// Write your code here.
int i;

    for(i = 0;i < n; i++){

        for(char ch = 'A' ;ch <= 'A' + i; ch++){

            cout <<  ch << " ";
        }
    cout << endl;
    }
}
int main(){

    int n;
    cout << "Enter the Number of rows and columns";
    cin >> n;

    Pattern14(n);
    return 0;
}