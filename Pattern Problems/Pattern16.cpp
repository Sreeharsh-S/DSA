#include<bits/stdc++.h>
using namespace std;


void nForest(int n) {
	// Write your code here.
int i,j;
char ch = 'A';
    for(i = 1;i <= n; i++){

        for(j = 0;j <i; j++)
        {
            cout << ch << " ";
        }
    ch++;
    cout << "\n" ;
    }
}
int main(){

    int n;
    cout << "Enter the Number of rows and columns";
    cin >> n;

    nForest(n);
    return 0;
}