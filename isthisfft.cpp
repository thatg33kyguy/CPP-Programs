#include "bits/stdc++.h"
using namespace std;

// NITS HACKS coding track

const unsigned int M = 1000000007;
 

const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve(){

    int x,cnt=0;
    cin >> x;

    for(int i=(10^x); i>0 ; i--){

        if((i)%3==0){
            cnt++;
        }

        else continue;

    }

   if(cnt<10^x){

    cout << cnt << endl;

   }

   else cout << cnt%M << endl;


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