#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);
 
 void solve(){

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){

        cin >> a[i];
    }

    if(n>2)
   {
    cout << "NO" << endl;
    return;
   }   

   else if(n==2){

     if(a[1]-a[0]>1){
        cout << "YES" << endl;
     }
     else{
        cout << "NO" << endl;
     }

      
   } 
}
 
signed main() {

    sherlockholmes
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
}

