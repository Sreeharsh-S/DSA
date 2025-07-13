#include<bits/stdc++.h>
using namespace std;


void nForest(int n) {
	// Write your code here.
int i,j;
    for(i = 0;i <= n; i++){

        for(j = 1;j <i+1; j++){
            cout << i;
        }
    cout << "\n";
    }
}
int main(){

    int n;
    cout << "Enter the Number of rows and columns";
    cin >> n;

    nForest(n);
    return 0;
}