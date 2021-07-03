#include <iostream>
using namespace std;
int main() {
int  curr = 0;
    int n; 
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum =0;
    for(int i=0; i<n; i++){
        sum = max(arr[i] , sum + arr[i]);
        curr = max(curr , sum);
            
    }
    cout << curr;

}