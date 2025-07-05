#include "bits/stdc++.h"
using namespace std;
//GOOD QUESTION...CAN USE DP OR GREEDY ALGORITHM


#define int long long

void solve(){
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int cnt=0;

    map<int ,int> mp;

    for ( int i=0; i< n-1; i++){
        if(a[i+1]>a[i]){
         cnt++;

        }
        
    }

    
    
    if (cnt==0){
        cout << cnt << endl;
    }

    else{
    cout << cnt-1 << endl;


}
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