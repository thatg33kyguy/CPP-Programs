#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);


// Read properly bc
// We have to check the occurrences of 0s for every cycle and increment the value for every iteration


 void solve(){

    int n;
    cin >>n;
    vector<int> v(n);
    vector<int> F(n,0);
    vector<bool> vs(n,false);
   
    

    for(int i=0; i<n;i++){
        cin >> v[i];
        v[i]--;

    }


     
     string s;
     cin >> s;


   


    for(int i=0; i<n; i++){

        if(!vs[i]){
            vector<int> cyc;
            int black=0;
            int x=i;

            while(!vs[x]){
                vs[x]=true;
                cyc.push_back(x);


                if(s[x]=='0'){
                    black++;

                }
                x=v[x];
            }

            for(int idx: cyc){

                F[idx]=black;

            }
        }
    }

    for(int i=0; i<n; i++){

        cout << F[i] << " ";

    }

    cout << endl;

    


    
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

