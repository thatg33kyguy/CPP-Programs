#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int MAXN= 1e5+5;
const int mod1=(1e9+7);
const int mod2=(998244353);

 void solve(){

    int n;
    cin >> n;
    int b[MAXN];
    int a[MAXN];

    for(int i=1; i<n; i++){
        cin >> b[i];
    }
    b[0]=b[n]=0ll;

    for(int i=1; i<=n; i++){
        a[i]=b[i-1] | b[i];


    }
    bool yes=true;

    for(int i=1; i<n; i++){
        if((a[i] & a[i+1])!= b[i]){
            yes=false;
            break;
        }
    }
    if(yes){
        for(int i=1; i<=n; i++){
            cout  << a[i] << ' ';
       
        }
             cout << endl;
    }
    else{
        cout << -1ll << endl;
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

