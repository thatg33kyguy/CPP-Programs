//Rajprateem Nath
//2214012

#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int x,y;
    cin>>x>>y;

    if(y==0 || x==0){
        cout<<0;
    }
    else{
        cout<<y/2;
    }

    
    return 0;
}