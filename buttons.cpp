#include "bits/stdc++.h"
using namespace std;

#define int long long

//first 1000 rated question
void solve(){

    int n,k=0,x=1;
    cin>>n;

    for(int i=n-1; i>=1; i--){
        k+=(x*i);
        x++;
    }
 
 cout<<k+n;

}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    

        solve();
        
    

    return 0;
}