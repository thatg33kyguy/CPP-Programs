#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
    string s, t;
    cin >> s >> t ;

    int a = s.length();
    int b = t.length();

    int g = __gcd(a,b);

    int l = a*b/g;

    string A="", B="";

    for( int i=0; i<l/a; i++){ A+=s;}
    for ( int i=0; i<l/b; i++){ B+=t;}

    if(A==B) cout << A << endl ;
    else cout << "-1\n" << endl ;



   






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