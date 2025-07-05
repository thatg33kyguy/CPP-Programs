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


if(n<=2){

    cout << "No" << endl;
    return;
}
else{
    cout << "Yes" << endl;
    if(n%2==0){
        cout << 1ll << " ";
        cout << n/2 << endl;
        cout << n-1ll << " ";
        for(int i=1; i<=n; i++){

            if(i==n/2) continue;

            cout << i << " "; 
        }
        cout << endl;
        
    }
    else{
        cout << 1ll << " ";
        int tt=(n+1)/2;
        cout << tt << endl;
        cout << n-1ll << " ";
        for(int i=1; i<=n; i++){

            if(i==tt) continue;
            cout << i << " ";
        }
         
    }
}

    
}
 
signed main() {

    sherlockholmes
    // int t = 1;
    // cin >> t;
    // while(t--) {
 
       solve();
        
    // }
 
    return 0;
}

