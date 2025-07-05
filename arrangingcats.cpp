#include "bits/stdc++.h"
using namespace std;

const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve(){

    int n;
    cin >> n;
    string s,f, S,F;
    cin >> s;
    cin >> f;
    int ans=0;
    map< int, int > mp;

    

    
    for( int i=0; i< n; i++){
       if(s[i]!=f[i]){
         mp[s[i]]++;

        //  if(s[i]==1) cnt++;

        //  else if (s[i]==0) k++;

        // //  S.insert(s[i]);
        // //  F.insert(f[i]);


       }



    }


    for( auto &x: mp){
        ans=max(ans, x.second);
    }


    cout << ans << endl;


    



// sort(S.begin(), S.end());
// sort(F.begin(), F.end());

// for( int i=0; i<S.size(); i++){
//     if(S[i]!=F[i]){
//         cnt++;
//     }
// }



// cout << cnt +1 << endl;

    

    



    
    

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