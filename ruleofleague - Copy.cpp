#include "bits/stdc++.h"
using namespace std;

//FUCKING TRICKY QUESTION...LOGIC USED IN THE LOOPS IS MOST CRUCIAL


const int mxN = 1e5+1, oo = 1e9;

#define int long long

void solve(){

    int n, x, y;
     cin >> n >> x >> y ;

if((x>0 && y>0) || (x==0 && y==0) || (n-1)%(max(x,y))!=0){
    
     cout << -1 << endl; 
     return;

}

if(x>y) swap(x,y);




for( int i=1; i<n; i+=y){
    for(int j=1; j<=y; j++){
        cout << i+1 << " ";
    }
}


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