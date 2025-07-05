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
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int best=0;

    for(int i=0; i<n; i++){
        int curr=0;
         for( int j=i; j<n; j++){
            if(a[j]<=a[i]){
                curr++;
            }
         }
         best=max(best, curr);
    }

    cout << n-best << endl;

    


    
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

