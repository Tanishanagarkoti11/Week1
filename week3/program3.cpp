#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        unordered_set<int> s;
        bool duplicate = false;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (s.count(x)) duplicate = true;
            s.insert(x);
        }
        cout << (duplicate ? "YES" : "NO") << "\n";
    }
    return 0;
}