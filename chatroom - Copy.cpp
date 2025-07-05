#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s, t;
    cin >> s;
    string k= "hello";
    int cnt=0;
    vector<char> hello;
 
   for(int i=0; i<s.size(); i++){

    if(hello.size()==0 && s[i]=='h' ){

        hello.push_back('h');
    }
    else if(hello.size()==1 && s[i]=='e' )   hello.push_back('e');

    else if(hello.size()==2 && s[i]=='l' )   hello.push_back('l');

    else if(hello.size()==3 && s[i]=='l' )   hello.push_back('l');

    else if(hello.size()==4 && s[i]=='o' )   hello.push_back('o');

   }

   if(hello.size()==5) cout<<"YES";
   else cout<<"NO";


}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

        solve();
    

    return 0;
}
