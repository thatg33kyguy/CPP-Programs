#include "bits/stdc++.h"
using namespace std;

// #define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

#define forn(i, n) for (int i = 0; i < int(n); i++)




 void solve(){

    string s;
    cin >> s;
    int n= s.size();
    int ans=1, l=0, r=0;

    bool flag= false;
vector<bool> a(n + 1);
        a[0] = true;
        forn(i, n)
            a[i + 1] = a[i] && (s[i] == '1' || s[i] == '?');
        vector<bool> b(n + 1);
        b[0] = true;
        for (int i = n - 1; i >= 0; i--)
            b[n - i] = b[n - i - 1] && (s[i] == '0' || s[i] == '?');
        int result = 0;
        forn(i, n)
            if (a[i] && b[n - i - 1])
                result++;
        cout << result << endl;
    
    


    

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

