#include "bits/stdc++.h"
using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int T = 1;
    cin >> T;
    while(T--) {
        string str;
        cin>>str;
    for(int i=0;i<str.length();i++){
		str[i]=toupper(str[i]);}

        if(str=="YES") cout<<"YES\n";
        else cout<<"NO\n";
        
    }

    return 0;
}