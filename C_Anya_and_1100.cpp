#include <bits/stdc++.h>
using namespace std;
void beautiful(){
        string a;
        cin >> a;
        int q;
        cin>>q;
        int n = a.length();
        set<int> sub;
        for (int j = 0; j <= n - 4; j++) {
            if (a.substr(j, 4) == "1100") {
                sub.insert(j);
            }
        }
        while(q--){
            int pos;
            char v;
            cin>>pos>>v;
            pos--; 
            int start = max(0, pos - 3);
            int end = min(n - 4, pos); 


            for (int i = start; i <= end; i++) {
                if (a.substr(i, 4) == "1100") {
                    sub.erase(i);
                }
            }
            a[pos] = v;


            for (int i = start; i <= end; i++) {
                if (a.substr(i, 4) == "1100") {
                    sub.insert(i);
                }
            }

            if (sub.empty()) {
                cout << "NO" << endl;
            }
            else {
                 cout << "YES" << endl;
            }

        }
        
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; 
    cin >> t;
    
    while (t--) {
        beautiful();
    }
    
    return 0;
}