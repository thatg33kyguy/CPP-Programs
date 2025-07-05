#include "bits/stdc++.h"
using namespace std;



#define int long long

void solve(){
   
    string L,R;
    int ans=0;
    string cnt;
    int l,r;
    

    cin >> L >> R;

      if(L==R) {cout << 0 << endl;
     return;}
      reverse(L.begin(), L.end());
        reverse(R.begin(), R.end());
    // reverse(all(L));
    // reverse(all(R));
 
    while(L.size() < R.size()){ L += '0';}

  

    // string s= to_string(L);
    // string t=to_string(R);
    
    // int s1,t1;

    l=L.size(), r=R.size();
       reverse(L.begin(), L.end());
        reverse(R.begin(), R.end());
    // reverse(all(R));
    // reverse(all(R));


    for(int i=0; i<r; i++){
        if(L[i]!=R[i]){
            ans=abs(R[i]-L[i]) + 9*(r-i-1);
            break;
        }
    }

    cout << ans << endl;

}

//     if(l!=r){
    
//        for(int i=0; i<(r; i++){

//           cnt+=R[i];
            
//         }
//         int m= stoi(cnt);

     
//         ans=(9*(r-l))+ m;


//     }


//     else if(l==r){

//       for(int i=0; i<r; i++){
//          if(L[i]!=R[i]){
//             ans=(R[i]-L[i]) + (r-i-1)*9;
         
//             break;
//          }
         
//       }
     
//     }

//      cout << ans << endl;
    


// }

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int T = 1;
    cin >> T;
    while(T--) {

        solve();
        
    }

    return 0;
}