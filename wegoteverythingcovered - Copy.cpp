#include "bits/stdc++.h"
using namespace std;



#define int long long

void solve(){

    int n,k;
    cin >> n >> k;

    string s, ans;

    for(int i=97; i<(97+k);  i++){
        
         s += static_cast<char>(i);
        
        }

     
for(int i=0; i<n; i++)
{
    cout << s ;
}

cout << endl;

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