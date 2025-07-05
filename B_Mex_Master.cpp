#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()


        const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    int n;
		cin>>n;
		int sum0=0;
		bool f=false;
		for(int i=1;i<=n;i++) {
			int x;
			cin>>x;
			if(x==0) {
				sum0++;
			} else if(x>=2) {
				f=true;
			}
		}
		if(sum0<=(n+1)/2) {
			cout<<"0\n";
		} else if(f||sum0==n) {
			cout<<"1\n";
		} else {
			cout<<"2\n";
		}

    


    
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
