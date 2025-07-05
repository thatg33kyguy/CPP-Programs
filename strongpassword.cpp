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
 
 

 
void solve(){

    string s, ans;
    cin >> s;

    if(s.size()==1){
        if(s[0]=='a'){
            cout << "az" << endl; return;
        }
        else{
            ans.push_back(s[0]);
            ans.push_back('a');

            cout << ans << endl; return;
        }
    }


bool found = false;

//  for(int i=0; i<s.size(); i++){
//     ans[i]=s[i];
//  }

 for(int i=s.size()-1; i>0; i--){
    if(s[i]==s[i-1]){
        
        char c;
        if(s[i]=='a')  c='z';
        else  c='a';

        s.insert(s.begin()+i, c);
        cout <<  s << endl;

        found=true;
        break;

    }
 }


if (!found) {
        set<char> presentChars(all(s));
        for (char c = 'a'; c <= 'z'; ++c) {
            if (presentChars.find(c) == presentChars.end()) {
                cout << s << c << endl;
                return;
            }
        }
    }
 
    // ans.push_back(s[0]);
    // ans.push_back(s[1]);

    // for(int i=1; i<9; i++){

    //     if(s[i]!=s[i+1]){

    //         ans.push_back(s[i+1]);

    //     }

    //     else{

    //     }
    // }
    
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

// 1.Read constraints carefully, and try bruteforce as a last moment approach.
// 2. Observe carefully how and when to adjust stuff.