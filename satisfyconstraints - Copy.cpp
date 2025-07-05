#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){


    int n,a,x, cnt=0;

    cin >> n;
    vector<int> v;
    map<int,int> mp;
 
    while(n--){
        cin >> a >> x ;
    
    



    if(a==2){
        

    else if(a==1){
        int i;
        while( i>=x){
            mp[i+1]++;
    
        }
    }    

    else if( a==3){
        mp[x]--;
        
    }

    }
    

    for( auto y: mp){
        if(y.second> 1){
           cnt++;}

    }

    cout << cnt << endl;



}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int T = 1;
    cin >> T;
    while(T--) {

        solve();
        
    }

    return 0;
}