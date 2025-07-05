

#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
    int n,m, cnt=0;
    string a,b;
    cin>>n>>m;
    cin>>a>>b;
    

     
     
while(a.size()<=100){ 

    if(a.find(b) != string::npos){
        cout<<cnt<<"\n";
        break;
    }
    
    cnt++;
    a+=a;
}


        if (a.size() > 50) cout << -1 << "\n";




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



// // void solve() {
// 	int n, m;
// 	cin >> n >> m;
// 	string a, b;
// 	cin >> a >> b;
// 	int mn = 0;
// 	while (sz(a) <= 100) {
// 		if (a.find(b) != string::npos) {
// 			cout << mn << "\n";
// 			return ;
// 		}
// 		a += a;
// 		mn ++;
// 

// // void solve() {
// 	int n, m;
// 	cin >> n >> m;
// 	string a, b;
// 	cin >> a >> b;
// 	int mn = 0;
// 	while (sz(a) <= 100) {
// 		if (a.find(b) != string::npos) {
// 			cout << mn << "\n";
// 			return ;
// 		}
// 		a += a;
// 		mn ++;
// 	}
// 	cout << -1 << "\n";
// }