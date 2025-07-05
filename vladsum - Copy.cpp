#include "bits/stdc++.h"
using namespace std;

//PRECOMPUTATION METHOD

#define carpediem ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define fr(i, n) for(int i = 0; i < n; ++i)
#define nn '\n'
 #define pb push_back

// int digitSum(int n) {
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     return sum;
// }
int arr[200002];



void solve() {
   
   int n;
   cin >> n;
   cout << arr[n] << nn;

}

void precomp(){ 


    for(int i=1; i<=200002; i++){
        int sum = 0;
        int j=i;
        while (j) {
       
        sum+=j%10;
        j/= 10;
       

    }
     arr[i]= arr[i-1]+sum;
    }
}


signed main() {

    cout << fixed << setprecision(15);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    precomp();
    
    
    while (t--) {
       solve();
    }

    return 0;
}
