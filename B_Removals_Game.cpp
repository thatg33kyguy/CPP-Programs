#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
         cin >> b[i];
    }
    if(a==b){
        cout << "Bob" << endl;
        return;
    }

    reverse(a.begin(), a.end());

   if(a==b){
    cout << "Bob" << endl;
    return;
   }

   cout << "Alice" << endl;

    


    
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

