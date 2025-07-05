#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    int n;

    int minVal=INT_MAX, ans=0;
    cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++){

        cin >> v[i];
            if (v[i] < minVal) {
            minVal = v[i];
            ans = i;
        }
        
    }

    
       
       

    


    // sort(all(v));

    if(n==1 || (n==2 && v[0]==v[1]))
    {
        cout << -1ll << endl;
        
    }

    else{
        cout << 1ll << endl << ans+1ll;
    }

    


    
}
 
signed main() {

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    // int t = 1;
    // cin >> t;
    // while(t--) {
 
    solve();
        
    // }
 
    return 0;
}

