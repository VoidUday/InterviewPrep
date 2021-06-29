#include <bits/stdc++.h>
using namespace std;

int primeSum(int arr[], int n)
{
   
    int max_val = *max_element(arr, arr + n);
    vector<bool> prime(max_val + 1, true);
    prime[0] = false;
    prime[1] = false;
    for (int p = 2; p * p <= max_val; p++) {
        if (prime[p] == true) {
            for (int i = p * 2; i <= max_val; i += p)
                prime[i] = false;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
        if (prime[arr[i]])
            sum += arr[i];
 
    return sum;
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << primeSum(arr, n);
    return 0;
}