#include "bits/stdc++.h"
using namespace std;

const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve(){

int n;
cin >> n;
string s;
cin >> s;
int bal=0, ans=0;

for (int i=0; i<n ; i++){

  if(s[i]=='('){

     bal++;
  }

  else{

    bal--;

    if(bal<0){
        ans++;
        bal=0;
    }
  }
}
cout << ans << endl;

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