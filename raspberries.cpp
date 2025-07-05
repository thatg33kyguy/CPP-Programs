#include "bits/stdc++.h"
using namespace std;
// k=2,3,5
// since these are prime numbers, the product of the numbers will be divisible by k
// if any number in the array is divisible by k

const int mXN = 1e5+1, oo = 1e9;

#define int long long

void solve(){
    int n,k;
    cin >> n >> k;

    vector<int> v;
    int cnt=0;
    int mn= k;
    int p=1;
      

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt+=(x%2==0);
        if(x%k==0) mn=0;
    
        
        
        mn=min(mn, k-x%k);

        
       
    }
     
          
    if(k==4){

     
        

        if(cnt>=2) mn=0;
         else if(cnt==1) mn=min(mn, 1ll);
        else mn=min(mn,2ll);

       

    }

     cout << mn << endl; 
     






    


     
       

     

   





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