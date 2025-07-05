#include "bits/stdc++.h"
using namespace std;

const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve()
{

    int n,k,sum=0;
    cin >> n >> k;
    

    vector<int> v;

    for(int i=0; i<n; i++){

        int x;
        cin >> x;
        v.push_back(x);
        sum+=x;
    }

  int f=(k+1)/2,b=k/2,count=0;
  
 

  

  for(int i=0; i<n; i++){

     if(f <v[i]) break;
     else{
      f-=v[i];
     count++;
  }
  }


  for(int i=n-1; i>=0; i--){

     if(b<v[i]) break;
     else{b-=v[i];
     count++;
  }
  }

   if(sum<=k) cout << n << endl; 
   else cout << count << endl;

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