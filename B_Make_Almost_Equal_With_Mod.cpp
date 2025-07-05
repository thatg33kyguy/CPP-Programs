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
     int res=2ll;
     vector<int> v(n);

     for(int i=0; i<n; i++){
        cin >> v[i];
     }
     while(1){
        set<int> remainder;
        for(int i=0; i<v.size(); i++){
            remainder.insert(v[i]%res);

        }
        if(remainder.size()==2ll){
            break;
        }
        res*=2ll;
     }
    
    cout << res << endl;

    


    
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

