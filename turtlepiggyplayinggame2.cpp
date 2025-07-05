#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

 void raj(){

    int n;
    cin >> n;
    vector<int > v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
   
    int lo=0;
    int hi=n-1;
   
   sort(v.begin(), v.end());
   int ans=0;

   if(n%2!=0){
    
    int mid= lo+(hi-lo)/2;
    ans= v[mid];
    cout << ans << endl;

     
   }

   else{

     int midl= 1+ (lo+(hi-lo)/2);
     ans= v[midl];
     cout << ans << endl;
   }
   

    
}
 
signed main() {

    sherlockholmes
    int t = 1;
    cin >> t;
    while(t--) {
 
        raj();
        
    }
 
    return 0;
}

