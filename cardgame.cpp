#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define get(a,n) vi a(n); fr(i,0,n) cin>>a[i];
#define pi M_PI
#define int long long
#define ul unsigned long long
#define ld long double
#define vi vector <int>
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>> 
#define vs vector<string>
#define pb push_back
#define pp pop_back
#define fr(var,start,to) for(int var=start; var<to; var++)
#define fr2(var,start,to) for(int var=start; var<=to; var++)
#define fr3(var,start,to) for(int var=start; var>to; var--)
#define google cout<<"Case #"<<i+1<<": ";
#define nn '\n'
#define huehuehue cout<<"huehuehue"<<nn;
#define pii pair<int,int>
#define mine min_element
#define maxe max_element
#define ub upper_bound
#define lb lower_bound
#define bs binary_search
#define all(x) begin(x),end(x)
#define rall(x) rbegin(x),rend(x)
#define ff first
#define ss second
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define ook(x) order_of_key(x)
#define fbo(x) find_by_order(x)
#define mod 1e9+7
#define acc(a,x) fr(i,0,n) x += a[i];

int gcd(int a, int b);
int lcm(int a, int b);
int power(int a, int b);
bool isprime(int n);
bool ispowerof2(int n);
bool sieve(int n);
int mul_inverse(int a, int m);
int power2(int a, int b, int m);
int ceil(int a,int b){return (a+b-1)/b;}


const int N=2e5+10, inf=1e9+10;
const int mod1=(1e9+7);
const int mod2=(998244353);

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if (a > c and b > d) ans++;
    if (a > d and b > c) ans++;
    if (b > c and a > d) ans++;
    if (b > d and a > c) ans++;
    if (a == c and b > d) ans += 2;
    if (a == d and b > c) ans += 2;
    if (b == c and a > d) ans += 2;
    if (b == d and a > c) ans += 2;
 
    cout << ans << '\n';
}
 
 

 
// void solve(){
    
//     int a1,a2,b1,b2,game=0;
//     cin >> a1 >> a2 >> b1 >> b2;
    

//     if(a1>b1 && a2>b2) game+=2;
//     // if(a2>b2 && a1>b1) game+=2;
//     if(a1>b2 && a2>b1) game+=2;

//     cout << game << endl;
    
// }
 
signed main() {

    sherlockholmes
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
}

// 1.Read constraints carefully, and try bruteforce as a last moment approach.
// 2. Observe carefully how and when to adjust stuff.