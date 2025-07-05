#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n,m,a;
    cin>>n >>m>>a;

    int x=n/a;
    int y=m/a;

    if(a>x || a>y)
    cout<<1;

    if(x%a) x++;
    if(y%a) y++;

    cout<<x*y<<endl;

    return 0;
}