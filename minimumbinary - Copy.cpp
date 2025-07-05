#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){
    int n, x=0, y=0;
           
    string s;
    cin>>n;
    cin>>s;

    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            x++;
        }
        else y++;
    }

    if(y){

        cout<<'1';
        for(int i=0;i<x; i++){
            cout<<'0';
        }

       
    }
    else cout<< '0';

    

}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



        solve();
        
    

    return 0;
}