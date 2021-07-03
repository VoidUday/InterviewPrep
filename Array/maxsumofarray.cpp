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
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
             int sum =0;
            for(int k=i; k<=j; k++){
            //  cout << arr[k]<< " ";
                sum += arr[k];
            }
          //  cout << endl;
             curr = max(curr , sum);
        }
    }
    cout << curr;

}
