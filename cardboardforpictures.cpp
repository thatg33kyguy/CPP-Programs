#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

 void solve(){
    int n, c; cin >> n >> c;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    int l = 1, r = 1e9;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        int sumall = 0;
        for(int i = 0; i < n; ++i) {
            sumall += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if(sumall > c) break;
        }
        if(sumall == c) {
            cout << mid << "\n";
            return;
        }
        if(sumall > c) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    // int n,c;
    // cin >> n >> c;

    // vector<int> v(n);
    // for(int i=0; i<n; i++){
    //     cin >> v[i];
        
    // }
    // int l=1, r=1e9;

    // while(l<=r){
    //     int mid= l+(r-l)/2;
    //     int sum=0;
    //     for(int i=0; i<n; i++){
    //         sum+=(v[i]+ 2*mid)*(v[i]+2*mid);
    //         if(sum>c) break;
    //     }
    //     if(sum==c){
    //         cout << mid << endl;
    //         return;
    //     }
    //     if(sum <c){
    //         r=mid-1;
    //     }
    //     else{
    //         l=mid+1;
    //     }
    // }
   

    
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

