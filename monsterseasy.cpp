#include "bits/stdc++.h"
using namespace std;

#define int long long

//conceptual question

void solve(){

    int n;
    cin>>n;
    vector<int> v;
    int a, ans=0, cnt=0;

    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for( int i=0; i<n; i++){
        if(v[i]>cnt){
            cnt++;
            ans+=v[i]-cnt;
        }
    }


    cout << ans << endl;
        


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