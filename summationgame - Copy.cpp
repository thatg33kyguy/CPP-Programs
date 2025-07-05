#include "bits/stdc++.h"
using namespace std;


//TOUGH QUESTION 
#define int long long

void solve(){

    int n,k,x;
    cin >> n >> k >> x;
    vector<int> v;

    int sum=0, sum1=0;

    for( int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

     for (int i=0; i<k; i++ ){

      sum+=
         
    
    }

     }

     for(auto p: v){
        sum+=p;
     }



     cout << sum ;






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