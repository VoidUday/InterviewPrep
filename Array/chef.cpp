#include <bits/stdc++.h>  
using namespace std;
int main()
{
 int t;
 while(t--){
     int D,d, A,B,C;
     cin >> D >> d >> A>> B >> C;
     int rs = D*d;
     if(rs < 10 ){
       return 1;
     }
     else if(rs < 21){
        return 2;
     }
     else if(rs < 42){
         return 3;
     }
    else{
        return 0;
    }
 }
   
    return 0;
}