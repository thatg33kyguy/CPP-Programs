#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

//UPPER BOUND USED INSTEAD OF LOWER BOUND

 void solve(){


    int n; 
    auto ans=0;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int m;
        cin >> m;
        
        if(m<v[0]){

            cout << 0ll << endl;
        }        else {
             auto lb= upper_bound(v.begin(), v.end(), m);
            int it = lb - v.begin();
            cout << it  << endl;
        }
        
       

    }
    

    
}
 
signed main() {

    sherlockholmes
    // int t = 1;
    // cin >> t;
    // while(t--) {
 
     solve();
        
    // }
 
    return 0;
}

