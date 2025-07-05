#include "bits/stdc++.h"
using namespace std;

const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve(){

    int n, ans=0, num=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='B'){
            ans=i;
            break;
        }
    }

    for(int j=n-1; j>=0; j--){
        if(s[j]=='B'){
            num=j;
            break;
        }
    }

    cout << num-ans+1 << endl;


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