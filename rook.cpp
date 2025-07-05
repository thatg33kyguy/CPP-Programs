#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
    char c;
    int n;
    cin>>c>>n;

    for(char i='a'; i<='h';i++){
        if(i==c) continue;
        cout<< i << n << "\n";

    }

    for(int i=1;i<=8; i++){
        if(i==n) continue;
        cout << c << i <<"\n";
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