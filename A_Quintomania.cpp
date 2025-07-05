#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<n-1; i++){
        int hi=v[i+1];
        int lo=v[i];
        if(abs(hi-lo)==7ll || abs(hi-lo)==5ll){
            continue;
        }
        else{
            cout << "NO" << endl;
            return;
        }

    }

    cout << "YES" << endl;
    


    
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

