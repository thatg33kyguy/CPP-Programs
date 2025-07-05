#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;
    string s;
    map<string, int> mp;

// STRING KO ZERO SE INITIALISE KARNE SE RUNTIME ERROR AATA HAIN
    

  while(n--){
    cin >> s;
    mp[s]++;

  }


   int mx =0;
   string ans;     

   for( auto x :mp){
     if(x.second > mx){
        
        mx=x.second;
        ans=x.first;
     }



 }


 cout << ans;


    }









signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int T = 1;
    // cin >> T;
    // while(T--) {

        solve();
        
    
    return 0;
}