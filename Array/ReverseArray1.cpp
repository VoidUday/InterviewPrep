#include <bits/stdc++.h>  
using namespace std;
void reverseArray(int arr[], int start, int end){
    if(start >= end)
    return;
   swap(arr[start], arr[end]);
    reverseArray(arr, start+1, end-1); 
}
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< " ";
    }
    
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
int n;
    cin >> n;
int arr[n];
    for(int i=0;i<n;i++) {
    cin >> arr[i];
    }
    reverseArray(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}