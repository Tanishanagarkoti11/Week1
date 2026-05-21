#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool jumpSearch(const vector<int>& arr, int key, int& comparisons) {
    int n = arr.size();
    int step = sqrt(n);
    comparisons = 0;
    int prev = 0;

    while (prev < n && arr[min(prev + step, n) - 1] < key) {
        comparisons++;
        prev += step;
        if (prev >= n)
            return false;
    }

    for (int i = prev; i < min(prev + step, n); i++) {
        comparisons++;
        if (arr[i] == key)
            return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int key;
        cin >> key;

        int comparisons = 0;
        bool isPresent = jumpSearch(arr, key, comparisons);

        if (isPresent)
            cout << "Present " << comparisons << endl;
        else
            cout << "Not Present " << comparisons << endl;
    }

    return 0;
}