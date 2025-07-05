#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);


// GOOD QUESTION


 void solve(){

    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    int mx=0;
    for(int i=0; i<n; i++){

        cin >> v[i];
        mx=max(v[i], mx);

    }
    
    while(m--){
       
       char c;
       int l,r;
       cin >> c >> l >> r;

       if(mx>=l && mx<=r){
           if( c=='+') mx++;
           else mx--;
       }

    cout << mx << " ";


    }

    cout << endl;
    

    


    
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

