#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n = 1;
    cin >> n;
    string s="";
    
    for(int i=1;i<=n;i++){
        if(i!=1) s+= " that ";
        if(i%2==0) s+= " I love ";
        else s+= " I hate ";
    }
     s+= " it";
     cout<< s;

    return 0;
}