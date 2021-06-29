#include <bits/stdc++.h>  
using namespace std;

void reverseArray(int arr[], int start, int end){
    while (start < end)
    {
       swap(arr[start], arr[end]);
       start++;
       end--;
    }
    
}
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    printArray(arr, n);
    reverseArray(arr, 0 , n-1);
    printArray(arr, n);
    return 0;
}