#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    string s,t,ans;
    cin >> s >> t ;
    int idx=0;

    	for(int i = 0; i < (int)s.size(); ++i) {
    		if(s[i] == '?') {
    			if(idx < (int)t.size()) s[i] = t[idx++];
    			else s[i] = 'a';
    		} else if(s[i] == t[idx]) ++idx;
    	}
    	if(idx >= t.size()) cout << "YES\n" << s << "\n";
    	else cout << "NO\n";


    


    
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

