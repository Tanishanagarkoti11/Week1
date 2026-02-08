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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long comparisons = 0, swaps = 0;

        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                comparisons++;
                if (a[j] < a[minIndex]) minIndex = j;
            }
            if (minIndex != i) {
                swap(a[i], a[minIndex]);
                swaps++;
            }
        }

        for (int x : a) cout << x << " ";
        cout << "\ncomparisons = " << comparisons << "\nswaps = " << swaps << "\n";
    }
    return 0;
}