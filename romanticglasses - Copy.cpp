#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

int n;
cin >> n;

vector<int> v;
int a;

for (int i=0; i<n; i++){
    cin >> a;
    v.push_back(a);
}

int sum1=0, sum2=0;

for(int i=0; i<n; i++){
    if(i%2==0) sum1+=v[i];
    else sum2+=v[i];

}

if( sum1==sum2) cout << "YES\n";
else cout << "NO\n";


}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int T = 1;
    cin >> T;
    while(T--) {

        solve();
        
    }

    return 0;
}