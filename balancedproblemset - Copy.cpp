#include "bits/stdc++.h"
using namespace std;



#define int long long

void solve(){
    int x,n;
    cin >> x >> n;


    




}

int findGCD(int arr[], int n) 
{ 
  int result = arr[0]; 
  for (int i = 1; i < n; i++) 
  { 
    result = gcd(arr[i], result); 
  
    if(result == 1) 
    { 
    return 1; 
    } 
  } 
  return result; 
} 

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int T = 1;
    cin >> T;
    while(T--) {

        solve();
        
    }

    return 0;
}