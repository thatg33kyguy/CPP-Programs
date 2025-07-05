#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;
    string s;
    cin >> s;

    int cntpos=0, cntneg=0;

  map<char,int> mp;

  for( auto c: s){
    mp[c]++;

  }

  int q= mp['+'];
  int w= mp['-'];

  int k= abs(q-w);

  cout << k << endl;


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