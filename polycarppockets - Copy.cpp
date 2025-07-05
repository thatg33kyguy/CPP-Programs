



//IMPORTANT MAP QUESTION



#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    int n;
    int a[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //sorting of an array in ascending order
    sort(a,a+n);
    int ans=0;

    map<int,int> m;

    for(int i=0; i<n; i++){
        if(a[i]==a[i+1])
         m[a[i]]++;
    }

    
    for(auto &x:m){
        ans=max(ans, x.second);
    }

    cout << ans+1;
    }




signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    solve();

    return 0;
}

//  23/12/23