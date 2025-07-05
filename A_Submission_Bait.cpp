#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 

int n;
int q[N];

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        q[i] = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        ++q[x];
    }

    for (int i = 1; i <= n; ++i)
    {
        if (q[i] % 2 == 1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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

