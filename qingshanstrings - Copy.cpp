#include "bits/stdc++.h"
using namespace std;

#define int long long
//initialisation step of x and y skipped

void solve(){

int n,m,x=1,y=1;
string s,t;
cin>>n>>m;
cin>>s>>t;

for(int i=0; i<m-1;i++){
    if(t[i]==t[i+1]){
        y=0;
    }
}

for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        if(t[0]==s[i] || s[i]==t[m-1] || y==0 ){
            x=0;

        }
        
    }
}

if(x) cout<<"yes\n";
else cout<<"no\n";

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