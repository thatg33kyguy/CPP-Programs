#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve(){

    int n, cnt=0;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            cnt++;
        }
    }

    if(n<=3){cout << "No" << endl;
                return;
        }

        if(n==4 && cnt==0){
            cout << "Yes" << endl;
        }
   
    else{

      if((sqrt(n)-2)*(sqrt(n)-2)== cnt){
          cout << "Yes" << endl;
      }

      else cout << "No" << endl;      

    }


    // int sq= sqrt(n);

    // if(n==2ll){

    // }

    // if((sq-2)*(sq-2)==cnt){
    //     cout << "Yes" << endl;
    // }

    // else cout << "No" << endl;

    


    
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

