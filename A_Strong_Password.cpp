#include "bits/stdc++.h"
using namespace std;

#define int long long
#define all(v) v.begin(),v.end()

const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);





 void solve()
{
	string s;
	cin >> s;
	int n = s.size();
	int idx = -1;
	for(int i = 0; i + 1 < n; i++)
		if(s[i] == s[i + 1])
			idx = i;
	if(idx == -1)
	{
		if(s.back() == 'a') cout << (s + "b") << endl;
		else cout << (s + "a") << endl;
	}
	else
	{
		string t = "a";
		if(s[idx] == 'a') t = "b";
		cout << s.substr(0, idx + 1) + t + s.substr(idx + 1) << endl;
	}
}
 
signed main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
	
}

