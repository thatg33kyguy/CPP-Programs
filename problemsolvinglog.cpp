// #include "bits/stdc++.h"
// using namespace std;

// // 916 div 3
// //TOOK A LOT OF TIME
// #define int long long

// void solve(){
    
// int n,x;
// char c;
// cin >> n;
// map<char,int> mp;
// int cnt=0;
// string s;

// cin >> s;




// sort(s.begin(), s.end());


// for( auto x :s){
    
//    mp[x]++;
   
//    }


//  for( auto [x,c]: mp) {
//     if((x-'A'+1)<=c){
//         cnt++;
//     }
//  }

// cout << cnt << endl;



// }

// //learnt how to access and use maps and their mapped values



#include "bits/stdc++.h"
using namespace std;
 
// 916 div 3
//TOOK A LOT OF TIME
#define int long long
 
void solve(){
    
int n;
cin >> n;
map<char,int> mp;
int cnt=0;
string s;
 
cin >> s;
 
 
 
 
sort(s.begin(), s.end());
 
 
for( char x :s){
    
   mp[x]++;}
 
 
 for( auto [x,c]: mp) {
    if((x-'A'+1)<=c){
        cnt++;
    }
 }
 
cout << cnt << endl;
 
 
 
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











    








// signed main() {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//     int T = 1;
//     cin >> T;
//     while(T--) {

//         solve();
        
//     }

//     return 0;
// }