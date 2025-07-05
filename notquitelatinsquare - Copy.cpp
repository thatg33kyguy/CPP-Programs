#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    int n=3;
    map<char, int> cnt;
    string s;

    for(int i=0; i<3; i++){
        cin >> s;

        for( auto &x : s){
            cnt[x]++;
        }
    }

    for( char c='A'; c<='C' ; c++)
{
    if(cnt[c]!=3) cout << c << endl;
}
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