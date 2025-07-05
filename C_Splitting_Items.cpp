#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    int n,k;
    cin >> n >> k;
    int alice=0, bob=0;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.rbegin(), v.rend());
    int cnt=k;

    for(int i=1; i<n; i+=2){
        int x=v[i];
        v[i]=min(v[i-1], v[i]+cnt);
        cnt=max(0ll, cnt-(v[i]-x));
    }

    for(int i=0; i<n; i++){
        if(i%2==0) alice+=v[i];
        else bob+=v[i];
    }

    cout << abs(alice-bob) << endl;


    // sort(all(v));

    // if(n%2==0){

    //     bob+=v[0];
    //     alice+=v[1];
    //     for(int i=2; i<n; i++){
    //         if(i%2==0){
    //             bob+=v[i];
    //         }
    //         else{
    //             alice+=v[i];
    //         }
    //     }
    // }

    // else{
    //     alice+=v[0];
    //     bob+=v[1];

    //     for(int i=2; i<n; i++){
    //         if(i%2!=0){
    //             bob+=v[i];
    //         }
    //         else{
    //             alice+=v[i];
    //         }

    //     }    }


    //     bob+=k;
       
    //    cout << max(0ll, alice-bob) << endl;

    


    
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

