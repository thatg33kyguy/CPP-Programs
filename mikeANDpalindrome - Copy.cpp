#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

string s;
cin >> s;

int cnt=0;
int n= s.size();

for(int i=0; i<s.size(); i++){
    if(s[i]!=s[n-i-1]){
        cnt++;
    }
}
if(n%2==0 && cnt==0) cout << "NO";
else if(n%2!=0 && cnt==0) cout << "YES";

else if( cnt==2) cout << "YES";
else cout << "NO";

}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    // int T = 1;
    // cin >> T;
    // while(T--) {

        solve();
        
    

    return 0;
}