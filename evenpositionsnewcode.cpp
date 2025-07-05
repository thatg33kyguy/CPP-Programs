#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

//GOOD QUESTION

 void solve(){

    int n, cnt=0,ans=0;
    cin >> n;
    string s;
    cin >> s;
    stack<int>st;

    for(int i=0; i<n; i++){
        if(s[i]=='(') cnt++;
        else if(s[i]==')') cnt--;
        else{
            if(cnt==0){
                s[i]='(';
                cnt++;
            }
            else {s[i]=')'; cnt--;}
        }
    }

    for(int i=0; i<n;i++){
        if(s[i]=='(') st.push(i);
        else{
            int x=st.top();
            st.pop();
            ans+=abs(x-i);

        }
    }

    cout << ans << endl;
   
    

   
   

    
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

