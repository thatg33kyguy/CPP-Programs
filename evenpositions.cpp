#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

 void solve(){

    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> st;
    int x=n/2,a=0;

    

    for(int i=1; i<n; i+=2){
        if(s[i]=='('){
            a+=2;
        }
    }

    cout << a+x << endl;



            

        

    
   

    
}
 
signed main() {

    sherlockholmes
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
}

