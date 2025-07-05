#include "bits/stdc++.h"
using namespace std;

#define int long long


//cvc vc pattern from the back


void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;
     string p;

    for(int i=1; i<n-2; i++){
        if((s[i]=='a'||'e') && (s[i+2]!='a'||'e') ) {
            s[i+1]='.';
            s[i+2]=s[i+1];
            p+=s[i];
        }
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