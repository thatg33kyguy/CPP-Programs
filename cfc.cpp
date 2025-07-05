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
        int mnm = INT_MAX;
          int mxm = INT_MIN;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<char> res(n, '0');

        
        for (int i = 0; i < n; i++) {
            if (a[i] < mnm) {
                mnm = a[i];
                res[i] = '1';
            }
        }

      
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] > mxm) {
                mxm = a[i];
                res[i] = '1';
            }
        }

        for (char c : res) cout << c;
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

