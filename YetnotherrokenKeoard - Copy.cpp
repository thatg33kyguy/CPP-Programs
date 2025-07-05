#include "bits/stdc++.h"
using namespace std;

const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve(){

    string s;
    cin >> s;

    int cnt=0;
    vector<char> v;
    map<char, int> mp;
    int a=0,b=0;
    string ans,raj;
    int n=s.size();

 for(int i=n-1; i>=0; i--){
    if(s[i]=='B') a++;
    else if( s[i]=='b') b++;
    else{
        if(s[i]>='A' && s[i]<='Z'){
            if(a) a--;
            else ans.push_back(s[i]);        }

        else{

            if(b) b--;
            else ans.push_back(s[i]);

        }    
    }

 }

 reverse(ans.begin(), ans.end());

 cout << ans << endl;

















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