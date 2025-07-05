#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
vector<int> tree[MAXN];
int a[MAXN];

int dfs(int node, int parent) {
    int total = a[node];
    for (int child : tree[node]) {
        if (child == parent) continue;
        total += dfs(child, node);
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    int result = dfs(1, 0);
    cout << result << endl;

    return 0;
}