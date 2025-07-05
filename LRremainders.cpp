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
    
    
    
    
    
    
 int mul( vi &arr){
    int temp=1;

       
        for(int i=0; i<arr.size(); i++){
            temp= temp*arr[i];
        }

        return temp;
    }
 

void solve(){

int n,m;


 
cin >> n >> m;
vi arr;
string s;
vi ans;

for(int i=0; i<n; i++){
    cin >> arr[i];
}
cin >> s;

for(int i=0; i<m; i++){
  int temp=mul(arr);

    ans.pb(temp%m);

    if(s[i]=='L') {arr.erase(arr.begin());}
    else{ arr.pop_back();}
    
}

for( auto it: ans){
    cout << it << " ";
}
cout << nn;


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