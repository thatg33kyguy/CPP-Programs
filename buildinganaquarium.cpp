#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

 void solve(){

    int n,x, ans=0;
    cin >> n >> x;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    // sort(a.begin(), a.end());

    int lo=0, hi=1e10+5;
    while(lo<hi){
        int mid=lo+(hi-lo+1)/2;
        int total=0;
         for(int i=0; i<n; i++){
            total+=max(mid-a[i], 0ll);
         }

         if(total<=x){
            lo=mid;
         }
         else{
            hi=mid-1;
         }
    }

    cout << lo << endl;




    // for(int i=0; i<n; i++){

    //     temp-=a[i];
    //     if(temp>=0) ans++;
    //       if(temp<0) break;

    // }

    // cout << ans << endl;
   

    
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

