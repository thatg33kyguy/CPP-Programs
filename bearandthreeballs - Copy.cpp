#include "bits/stdc++.h"
using namespace std;


//unordered set....removing identical pairs


#define int long long

void solve(){
    
    int n;
    cin >> n;
    int a[n];
    unordered_set<int> repeat;


    for( int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    for(int i=0; i<n; i++){
        if(repeat.find(a[i])==repeat.end()){
            repeat.insert(a[i]);
        }
    }
//for sorting an unordered set, store it in a vector
    vector<int> v(repeat.begin(), repeat.end());

    sort(v.begin(), v.end());
    int cnt=0;
    int k=v.size();

    for(int i=1; i < k-1; i++){
        if(v[i-1]+1==v[i] && v[i+1]-1==v[i]){
            cnt++;
        }
    }

    if(cnt>=1) cout << "YES";
    else  cout << "NO";

}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int T = 1;
    // cin >> T;
    // while(T--) {

      solve();
        
    // }

    return 0;
}