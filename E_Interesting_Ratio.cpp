#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAXN = 1e7 + 5;

vector<bool> isPrime(MAXN, true);
vector<int> interestingPairs(MAXN, 0);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAXN; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void compute() {
    sieve();
    for (int a = 1; a < MAXN; ++a) {
        for (int b = 2 * a; b < MAXN; b += a) {
            int f = b / a;  
            if (isPrime[f]) {
                interestingPairs[b]++;
            }
        }
    }
    for (int i = 1; i < MAXN; ++i) {
        interestingPairs[i] += interestingPairs[i - 1];
    }
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << interestingPairs[n] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    compute();  
    solve();      
    return 0;
}
