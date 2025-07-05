#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);
//SOLVED KHUDSE AFTER EDITORIAL, HAPPY!!!

 void solve(){
   
   int n;
   cin >> n;
   vector<int> v(n);
   for(int i=0; i<n; i++)
{
    cin >> v[i];
}
for(int i=0; i<n-1; i++){
    // if(i==n-1 && v[i]%2==0){
    //     break;
    // }
    
    if(v[i]%2==0 || v[i]==0){
        continue;
    }
    else{
        if(v[i+1]==0ll){
            cout << "NO" << endl;
            return;
        }
        v[i+1]--;
    }
}
if(v[n-1]%2!=0){
    cout << "NO" << endl;
    return;
}
cout << "YES" << endl;
    
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

