#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    
  int n,j,k;
   cin >> n >> j >> k;
   vector<int> a(n);
   int mxm=0;

   for(int i=0; i<n; i++){
    cin >> a[i];
   }

   if(k>1){
    cout << "YES" << endl;}
    else {
        mxm= *max_element(a.begin(), a.end());

        if(a[j-1]==mxm){ cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }

   }


    

 
signed main() {

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
}

