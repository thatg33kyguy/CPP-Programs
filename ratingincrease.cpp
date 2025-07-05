#include "bits/stdc++.h"
using namespace std;

#define int long long

void solve(){

    string s;
    cin>>s;
    int j=0;

    string p,q;

    q=q+s[0];

    for(int i=1; i<s.size(); i++) {

    if(s[i]!='0')  j=1;
    if(j) p+=s[i];
    if(!j) q+=s[i];
   }

   if(p.empty()){
    cout<<-1<<endl;
    return;
   }

   int a=stoll(q), b=stoll(p);
   if(a>=b){
    cout<<-1<<endl;
    return;
   }

   cout<<a <<" "<< b<<endl;

   //BASIC IMPLEMENTATION










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