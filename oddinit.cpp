#include <bits/stdc++.h>
using namespace std;

/*Data types shortcuts*/
typedef long long int lli;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<long long int,long long int>> vpll;
typedef map<int,int> mii;
typedef set<int> si;
typedef set<char> sc;

/*FUNCTIONS short*/
#define x first
#define y second
#define sz(a) int((a).size())
#define vpdsort(a) sort(a.rbegin(),a.rend())
#define asort(a) sort(a.begin(),a.end())
#define dsort(a) sort(a.begin(),a.end(),greater<long long int>())
#define ai(i,s,n) for(int i=s ; i<n ;++i ){ cin>>arr[i]; }
#define pb push_back
#define mp make_pair
#define endl '\n'

/*FUNCTION*/
void check() { cout<<"CHECK\n";}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
void swapint(int* a,int* b){ int t=*a; *a=*b; *b=t;}
void swapv(vll &v,lli i,lli j){ lli t=v[i];v[i]=v[j];v[j]=t;}

/*CONSTANTS*/
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

//COMENT//
/*

*/

void solve()
{
    lli n;cin>>n;
    lli ocount=0;
    lli zc=0;
    for(lli i=0;i<n;++i){
        int a;cin>>a;
        if(a%2==1){
            ocount++;
        }
        if(a==0){
            zc++;
        }
    }
    if(zc>=n-1){
        no();
        return;
    }
    if(ocount%2==0){
        yes();
    }
    else{
        no();
    }
}

/* main()  FUNCTION */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // solve();
// }
    int tc;
    cin >> tc;
 
    while(tc--){
        solve();
    }
    return 0;
}