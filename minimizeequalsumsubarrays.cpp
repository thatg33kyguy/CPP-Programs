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
    vector<int> p(n);

    for(int i=0; i<n; i++){

        cin >> p[i];
    }

    vector<int> q(n);

    for(int i=0; i<n; i++){
        q[i]=p[(i+1)%n];
       
    }

    for(int i=0; i<n; i++){
      

      cout << q[i] << " ";
       
    }
    cout << endl;
  






































}
 
//  void solve(){


// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// // void solve(){
//     int n;
//     cin >> n;
//     vector<int> p(n);
    
//     for(int i = 0; i < n; i++) {
//         cin >> p[i];
//     }

//     sort(p.begin(), p.end());
//     vector<int> q(n);

//     int left = 0, right = n - 1;
//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0) {
//             q[i] = p[right--];
//         } else {
//             q[i] = p[left++];
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         cout << q[i] << " ";
//     }
//     cout << '\n';
// }
 

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
    
//     return 0;
// }









    //  int t;
    // cin >> t;
    // while (t--) {
    //     int n;
    //     cin >> n;
    //     vector<int> p(n);
    //     for (int i = 0; i < n; ++i) {
    //         cin >> p[i];
    //     }
    //     sort(p.begin(), p.end());
    //     for (int i = 0; i < n; ++i) {
    //         cout << p[i] << " ";
    //     }
    //     cout << '\n';
    // }

    // int n;
    // cin >>n;
    // int a[n];

   

    // for(int i=0;i <n; i++){
    //     cin >> a[i];
    // }


    //  if(n==1){
    //     cout << a[0] << endl; return;
    // }


    // for(int i=0; i<n-1; i++){
        
    //     cout << a[i+1] << " " << a[i] << " ";
        
    //         }
    

 
signed main() {

    sherlockholmes
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
}

