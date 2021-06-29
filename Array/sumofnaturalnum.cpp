#include <bits/stdc++.h>  
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
int n;
    cin >> n;
    if(n<0){
     cout << "Please enter positive number!";
    }
    else{
        int rs  = n * (n+1)/2;
        cout << rs;
    }
    return 0;
}