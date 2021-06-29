#include <bits/stdc++.h>  
using namespace std;
 int linearSearch(int arr[], int n, int key){
     for(int i=0; i<n; i++){
         if(arr[i] == key){
             return i;
         }
     }
 }
int main()
{
int n, key;
    cin >> n >> key;
int arr[n];
    for(int i=0;i<n;i++) {
    cin >> arr[i];
    }
  linearSearch(arr, n, key);
    return 0;
}