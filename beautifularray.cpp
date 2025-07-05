
// What if changing the world was just about being here, by showing up no matter how many times we get told we don’t belong,
// by staying true even when we’re shamed into being false, by believing in ourselves even when we’re told we’re too different? 
// And if we all held on to that, if we refuse to budge and fall in line, if we stood our ground for long enough, just maybe…
// The world can’t help but change around us :)


// Oh Bojack, no. There is no other side. This is it.

#include "bits/stdc++.h"
using namespace std;

 
#define sherlockholmes ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define get(a,n) vi a(n); fr(i,0,n) cin>>a[i];
#define pi M_PI
#define int long long
#define ll long long
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
 
//////////////////////////// TEMPLATES ////////////////////////////
 
#define print(x)  pr(x); cout << endl
void     pr(int t) {cout << t;}
void     pr(string t) {cout << t;}
void     pr(char t) {cout << t;}
void     pr(double t) {cout << t;}
void     pr(ul t) {cout << t;}
template <class T, class V> void    pr(pair <T, V> p);
template <class T> void     pr(vector <T> v);
template <class T> void     pr(set <T> v);
template <class T, class V> void     pr(map <T, V> v);
template <class T> void     pr(multiset <T> v);
template <class T> void     pr(stack<T> v);
template <class T> void     pr(list<T> v);
template <class T> void     pr(stack<T> v){while(!v.empty()){    pr(v.top()); cout<<' ' ; v.pop();}}
template <class T> void     pr(list<T> v) {  for(auto i: v){    pr(i);cout << ' ' ;} }
template <class T, class V> void     pr(pair <T, V> p) {     pr(p.first); cout <<' ';pr(p.second);}
template <class T> void     pr(vector <T> v) {  for (T i : v) {    pr(i);cout<<' '; } }
template <class T> void     pr(set <T> v) {  for (T i : v) {    pr(i); cout << ' ';}  }
template <class T> void     pr(multiset <T> v) {  for (T i : v) {    pr(i); cout << ' ';} }
template <class T, class V> void     pr(map <T, V> v) {  for (auto i : v) {    pr(i); cout <<nn;} }
 
 
int gcd(int a, int b);
int lcm(int a, int b);
int power(int a, int b);
bool isprime(int n);
bool ispowerof2(int n);
bool sieve(int n);
int mul_inverse(int a, int m);
int power2(int a, int b, int m);
int ceil(int a,int b){return (a+b-1)/b;}


const ll N=2e5+10;
const ll mod1=(1e9+7);
const ll mod2=(998244353);


 int n,k;
int pref[N], suff[N];
int a[N];

inline bool cmp(int i, int j){
    if((i%k)==(j%k)) return i<j;
    return (i%k)<(j%k);
}
 


void solve(){

   
    cin >> n >>k;
    for(int i=0; i<n; i++) cin >> a[i];

    sort(a,a+n, cmp);
    bool flag= false;
    int ans=0;

    for(int i=0; i<n; i++){

        int j=i;
        while(j+1<n && (a[i]%k)==(a[j+1]%k)) j++;
        if((j-i+1)%2){
            if(flag){
                ans=-1;
                break;
            }

            for(int l=i; l<=j; l++){
                pref[l]=suff[l]=0;
            }
            for(int l=i+2; l<=j; l+=2){
                pref[l]= pref[l-2]+(a[l-1]-a[l-2])/k;
            }
            for(int l=j-2; l>=i; l-=2){
                suff[l]=suff[l+2]+(a[l+2]-a[l+1])/k;
            }
            int best= mod2;
        
            for (int l = i; l <= j; l += 2) {
					best = min(best, pref[l] + suff[l]);
				}
 
				ans += best;
 
				flag = true;
			}
			else {
				for (int l = i; l < j; l += 2)
					ans += (a[l + 1] - a[l]) / k;
			}
 
			i = j;
		}
 
		cout << ans << '\n';



    
 
}
 
signed main() {

    sherlockholmes
    int t = 1;
    cin >> t;
    while(t--) {
 
        solve();
        
    }
 
    return 0;
}