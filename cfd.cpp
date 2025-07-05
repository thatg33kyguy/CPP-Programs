#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){


    int n,k;
    cin >> n >> k;
    string s;
     int cnt1=0; 


//    bool bob = false;

    for (int i=0; i<n; i++){
         cin >> s[i];
         if(s[i]=='1')cnt1++;
    }

      if (cnt1 <= k) {
        cout << "Alice" << endl;
        return;
    }
    
    
     vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        pref[i + 1] = pref[i] + (s[i] == '1');
    }

    if (n < 2 * k) {
        for (int i = 0; i <= n - k; ++i) {
            int new = pref[i + k] - pref[i];
            int y = cnt1 - new;
            if (y <= k) {
                cout << "Alice" << endl;
                return;
            }
        }
    }

    bool y = true;
    for (int i = 0; i <= n - k; ++i) {
        int new= pref[i + k] - pref[i];
        if (new < k) {
            y = false;
            break;
        }
    }

    if (y)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
    


    
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

