 #include "bits/stdc++.h"
 
    #define carpediem ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    #define get(a,n) vi a(n); fr(i,0,n) cin>>a[i];
    #define pi M_PI
    #define print(a,n) fr(i,0,n) cout<<a[i]<<" "; cout<<nn;
    #define int long long
    #define ll long long
    #define ul unsigned long long
    #define ld long double
    #define vi vector <int>
    #define pb push_back
    #define pp pop_back
    #define fr(var,start,to) for(int var=start; var<to; var++)
    #define fr2(var,start,to) for(int var=start; var<=to; var++)
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

    ll n;
    cin >> n;
    ll cnt=0;
    
    get(q,n);
    vi vv;
    

    string ss;
    ss.pb('1');
    

    fr(i,0,n-1){
        cnt=0;

        fr(j,0,i){


            if(q[j+1]<q[j]){
               cnt++;
            }
        }


        fr(j,0,i){

            if(q[j+1]>=q[j]){

                if(cnt==0){
                    ss+='1';
                }

                else if(cnt==1 && q[j+1]>q[0]){
                    ss+='0';
                }
                else if(cnt==1 && q[j+1]<=q[0]){
                    ss+='1';
                }

                else{
                    ss+='0';
                }
            }

            else{
                if(q[j+1]<=q[0] && cnt<2){
                    ss+='1';
                }
                else{
                    ss+='0';
                }
            }
            
        }























     
        //    if(q[j+1]>=q[j]){
        //      if(cnt<=1 && q[0]>=q[j+1]){
        //         ss+='1';
        //      }
        //      else{
            
        //       ss+='0';
        //    }
        //    }
        //    else{
        //     cnt++;
        //     if(cnt<=1 && q[j+1]<=q[0]) ss+='1';
        //     else if(cnt<=1 && q[j+1]>=q[0]) ss+='0';
        //    }
        }
       
        
    
    
    cout << ss << nn;






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