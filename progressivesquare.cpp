#include "bits/stdc++.h"
using namespace std;

const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve(){

int n,c,d;


cin >> n >> c >> d;
vector<int> v;
vector<int> ans;

for(int i=1; i<=n*n; i++ ){
    int k;
    cin >> k;
    v.push_back(k);
}


sort(v.begin(), v.end());
int a=v[0];
// int a=*min_element(v.begin(),v.end());
// // ans.push_back(a);

// int new=a;
// sort(v.begin(), v.end());
// int flag=1;


for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        ans.push_back(a + (i-1)*d + (j-1)*c);
    }
}

sort(ans.begin(), ans.end());
// int flag=1;

for(int i=0; i<n*n; i++){
    
        if (v[i]!=ans[i]) {cout << "NO\n";
         return;
        }
        
        
}

cout << "yes\n" << endl;

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
