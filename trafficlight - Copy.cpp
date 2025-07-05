 #include "bits/stdc++.h"
 
    #define carpediem ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #define get(a,n) vi a(n); fr(i,0,n) cin>>a[i];
    #define pi M_PI
    #define print(a,n) fr(i,0,n) cout<<a[i]<<" "; cout<<nn;
    #define ll long long
    #define int long long
    #define ul unsigned long long
    #define ld long double
    #define vi vector <int>
    #define pb push_back
    #define pp pop_back
    #define fr(i,n) for(int i=0; i<n; ++i)
    #define fr2(i,n) for(int i=0; i<=n; ++i)
    #define google cout<<"Case #"<<i+1<<": ";
    #define nn '\n'
    #define pii pair<int,int>
    #define vsort(vect) sort(vect.begin(),vect.end())
    #define mine min_element
    #define maxe max_element
    #define ub upper_bound
    #define lb lower_bound
    #define bs binary_search
    #define sortt(x) sort(x,x+n)
    #define rsort(x) sort(x,x+n, greater<int>())
    #define ff first
    #define ss second
    #define yes cout<<"YES"<<nn
    #define no cout<<"NO"<<nn
    #define ook(x) order_of_key(x)
    #define fbo(x) find_by_order(x)
    using namespace std;
    int gcd(int a, int b);
    int lcm(int a, int b);
    int power(int a, int b);
    bool isprime(int n);
    bool ispowerof2(int n);
    bool sieve(int n);
    int mul_inverse(int a, int m);
    int power2(int a, int b, int m);
    ll gcd(ll a, ll b)     { if (b == 0) return a; return gcd(b, a % b); }
    ll lcm(ll a, ll b)     { return (a * b) / gcd(a, b);}
    const int mod = 1e9+7;
    const int inf = 1e18;

    //normal implementation plus bound conditions concept
 

void solve(){

    int n;
    char c;
    cin >> n >> c;

    string s;
    cin >> s;
    s+=s;
    int next=2*n,res=0;

    for(int i=2*n-1; i>=0; i--){
        if( s[i]== 'g'){
            next=i;
        }

        if(s[i]== c){
          res = max(res, next-i);
        }
    }

    cout << res << nn;

    


}

 signed main() {

    carpediem
 

    int t = 1;
    cin >> t;
    while(t--) {

        solve();
        
    }

    return 0;
}
// int n;
// 	cin >> n;
// 	char ch;
// 	cin >> ch;
// 	string str;
// 	cin >> str;
// 	vector <int> green;
// 	for(int i = 0; i < str.size(); i ++) {
// 		if(str[i] == 'g') green.push_back(i);
// 	}
// 	int mx = 0;
// 	for(int i = 0; i < str.size(); i ++) {
// 		if(str[i] == ch) {
// 			auto it = lower_bound(green.begin(), green.end(), i);
// 			int f = 0;
// 			if(it == green.end()) it = green.begin(), f = 1;
// 			if(f) {
// 				mx = max(mx, n-i+*it);
// 			}else mx = max(mx, *it-i);
// 		}
// 	}
// 	cout << mx << "\n";