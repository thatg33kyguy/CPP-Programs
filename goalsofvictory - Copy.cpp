#include "bits/stdc++.h"
using namespace std;

#define int long long

void raj(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n-1;i++){
       int x;
       cin>>x;
       sum+=x;
    }
    cout<<-sum<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int T = 1;
    cin >> T;
    while(T--) {
        raj();
        
    }

    return 0;
} 