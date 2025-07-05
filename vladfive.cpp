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
 

void solve(){

    string s;
    cin >> s;
    int ansa=0, ansb=0;
    int n=s.size();

    for(int i=0; i<n; i++){

        if(s[i]=='A'){
            ansa++;
        }
        else ansb++;

    }

    // int ans= max(ansa, ansb);

    if(ansa>ansb){ cout << 'A' << endl;}
    else { cout << 'B' << endl;}


}

signed main() {

    cout << fixed << setprecision(15);
	ios::sync_with_stdio(0);
	cin.tie(0);
 

    int t = 1;
    cin >> t;
    while(t--) {

        solve();
        
    }

    return 0;
}