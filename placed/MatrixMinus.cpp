#include <bits/stdc++.h>  
#define N 4
using namespace std;
void subtract(int A[][N], int B[][N], int result[][N]){
    for(int i=0; i<N; i++){
        for (int  j = 0; j < N; j++)
        {
            result[i][j] = A[i][j] - B[i][j];
        }
        
    }
}
int main()
{
     int A[N][N] = {{1,1,1,1},
                   {2,2,2,2},
                   {3,3,3,3},
                   {4,4,4,4}};
     int B[N][N] = {{1,1,1,1},
                   {2,2,2,2},
                   {3,3,3,3},
                   {4,4,4,4}};
     int result[N][N];       
     subtract(A,B,result); 
     for(int i=0; i<N; i++){
        for (int  j = 0; j < N; j++)
        {
          cout <<  result[i][j] << " ";
          
        }
        cout << endl;
    }                 
    return 0;
}