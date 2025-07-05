#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int T = 1;
    cin >> T;
    while(T--) {
        int i,n,k,hapi=0, arr[n];
        cin>>n>>k;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        
        for(int i=0;i<k;i++){
           
           hapi=hapi+arr[i];
        }
        

        cout<<hapi<<endl;
        
    }

    return 0;
}