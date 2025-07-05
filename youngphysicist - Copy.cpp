#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    int n;
    cin >> n;
    int x,y,z;
    int sum_x=0, sum_y=0, sum_z=0;
    
  while(n--){
     
     cin >> x >> y >> z;

     sum_x+=x;
     sum_y+=y;
     sum_z+=z;
    

    }

    if( sum_x==0 && sum_y==0 && sum_z==0) cout << "YES";
    else cout << "NO";

  }






signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

   // int T = 1;
   
   
   // cin >> T;
   // while(T--) {

        solve();
        
  //  }

    return 0;
}