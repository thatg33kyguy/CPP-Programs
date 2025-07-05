#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
 int a,b,c;
 cin>>a>>b>>c;
 
 int l=min({a,b,c});

  if(a%l == 0 && b%l==0 && c%l==0){ 

      if((a/l-1)+(b/l-1)+(c/l-1)<=3) {cout<<"yes\n";}

       else {cout<<"no\n";}
  }

  else cout<<"no\n";
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

//....codeforces round 903 div 3