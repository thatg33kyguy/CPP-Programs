#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define pii pair <int, int>
#define x first
#define y second



const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);


bool cmp(pii x, pii y) {
    return (x.x < y.x || (x.x == y.x && x.y > y.y));
}
void solve() {


    pii a[N];

    int n;
    cin >> n;
    for (int i = 1;i <= n;i++)cin >> a[i].x >> a[i].y;
    sort(a + 1, a + n + 1, cmp);
    int ans = 0, cnt = 0, mx = 0;
    queue <int> q;
    for (int i = 1;i <= n;i++) {
        if (a[i].x <= mx) continue;
        ans += a[i].y, cnt++, mx = max(mx, cnt);
        q.push(a[i].x);
        while (!q.empty() && q.front() <= cnt)q.pop(), cnt--;
    }
    cout << ans << '\n';
}

 
 
signed main() {

    sherlockholmes
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
}

