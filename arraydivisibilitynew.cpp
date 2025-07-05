#include <iostream>
#include <vector>

using namespace std;

void solve() {
   
   int n;
   cin >> n;

   for(int i=1; i<n+1; i++){
      cout << i << " ";
   }
   cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    while(t--){
    
    solve();

    }
    
    return 0;
}
