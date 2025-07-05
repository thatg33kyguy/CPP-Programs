#include "bits/stdc++.h"
using namespace std;
 
const int mxN = 1e5+1, oo = 1e9;
 
#define int long long

 
void solve(){
    int n,m,k;
    cin >> n >> m >> k;

    int z;
if (n % m == 0) {
  z = n/m;
} else {
  z = n/m + 1;
}
    
 
    // if(m==1 || n==1){
    //       cout << "no" << endl;
    //       return;
    // }
    
     if(k >=n-z){
    
        cout << "no" << endl;
    }
    else {
        cout << "yes" << endl;
    }
 
}
 
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
    int T = 1;
    cin >> T;
    while(T--) {
 
        solve();
        
    }
 
    return 0;
}