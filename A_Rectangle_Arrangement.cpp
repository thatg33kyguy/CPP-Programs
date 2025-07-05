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

    vector<int> v1,v2;

    for(int i=0; i<n; i++){
        int w,h;
        cin >> w >> h;
        v1.push_back(w);
        v2.push_back(h);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int m=v1.size();
    int k=v2.size();


    cout << (v1[m-1]+v2[k-1])*2 << endl;


    


    
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

