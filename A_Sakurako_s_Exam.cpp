#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    int a,b;
    cin >> a >> b;

    if(a==0ll && b%2!=0){
        cout << "NO" << endl;
        return;
    }
    if(a==0ll && b%2==0){
        cout << "YES" << endl;
        return;
    }

    if(b==0ll && a%2!=0){

        cout << "NO" << endl;
        return;
    }

    if(b==0ll && a%2==0){

        cout << "YES" << endl;
        return;
    }
    
    if((a+ 2ll*b)%2==0){
        cout << "YES" << endl; 
    }
   
     
    if((a+ 2ll*b)%2!=0){
        cout << "no" << endl; 
    }


    
}
 
signed main() {

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
}

