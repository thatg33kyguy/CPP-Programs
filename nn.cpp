#include "bits/stdc++.h"
using namespace std;
 
const int mxN = 1e5+1, oo = 1e9;
 
#define int long long

int z;
if (x % y == 0) {
  z = x / y;
} else {
  z = x / y + 1;
}

 
void solve(){


    int x= 7;
    int y= 3;
    int z= ceil(x/y);

    cout << z << endl;

    // int n,m,k;
    // cin >> n >> m >> k;

    // int x= ceil(n/m);
    
 
    // // if(m==1 || n==1){
    // //       cout << "no" << endl;
    // //       return;
    // // }
    
    //  if(k >=n-x){
    
    //     cout << "no" << endl;
    // }
    // else {
    //     cout << "yes" << endl;
    // }
 
}
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    // int T = 1;
    // cin >> T;
    // while(T--) {
 
        solve();
        
    // }
 
    return 0;
}