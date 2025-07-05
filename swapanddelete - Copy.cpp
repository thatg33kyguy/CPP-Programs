#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    string s;
    cin >> s;
    vector< int > cnt(2,0);
    

    for( int i=0; i<s.length(); i++){
        cnt[s[i]-'0']++;
    }

    for( int i=0; i<= s.length(); i++){
        if(i==s.length() || cnt[1- (s[i]-'0')]==0){
            cout << s.length()-i << endl;
            break;
        }

        cnt[1- (s[i]-'0')]--;
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