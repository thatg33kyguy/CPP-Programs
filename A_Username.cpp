#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){
    
    int cnt=0;
    string s;
    cin >> s;

    int n= s.size();

    
    if(s.size()==2 ){
        cout << s[0] << endl;
        return;
    }

    char d = s[n-2];

    if(s[n-1]=='0' &&  d>= 97ll){
        s.pop_back();
        cout << s << endl;
        return;
    }

    string ans = s;

     if( s[n-1] !=0){
        s.pop_back();
        cout << s << endl;
        return;
    }
    
    else{ 
        int i=1;
          while(s[n-i]=='0'){
            s.pop_back();
            i++;
          }
          s.pop_back();

    }
    

    // for(int i=1; i<n; i++){
    //     char c= s[i-1];
    //     char cc = s[i];

    //     if(int(cc)< 97ll && )
    // }
    // for(int i=s.size()-1; i>=0; i--){
    //     char cc = s[i];
    //     char ccc =s [i-1];
        
    //     if( cc < 'a' && ccc < 'a'){
    //         ans.pop_back();

    //     }

    //     else if( ccc>= 'a' && cc == '0') {
    //         // ans.pop_back();
    //         break;
    //     }
    // }
    
 
    cout << s << endl;
    


    
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

