#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);


//WOHOOOOOOOOOOOOO SEXYYYY KELA
//GALAT HO GAYA YAAR
 
 void solve(){
    
    int x,y, k;
    cin >> x >> y>> k;
  
  if(k%2==1){
    cout << x << " "<< y << endl;
    for(int i=1; 2*i<=k-1; i++)
    {

        cout << x+i << " " << y+i <<endl;
        cout << x-i << " " << y-i << endl;    }



  }

  else{

    for(int i=1; 2*i<=k; i++){

         cout << x+i << " " << y+i <<endl;
        cout << x-i << " " << y-i << endl;
        
    }








  }




    

    // int xc,yc,k,ansx=0, ansy=0;
    // cin >> xc >> yc >> k;

    // for(int i=1; i<k; i++){
    //     cout << i << " " << i << endl;
    //     ansx+=i;
    //     ansy+=i;
    // }
    // cout << (xc*k-ansx) << " " << (yc*k-ansy) << endl;
    
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

