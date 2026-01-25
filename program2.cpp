#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(const vector<int>& arr, int key, int& comparisons) {
    int low = 0;
    int high = arr.size() - 1;
    comparisons = 0;

    while (low <= high) {
        comparisons++;
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return true;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
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
        bool isPresent = binarySearch(arr, key, comparisons);

        if (isPresent)
            cout << "Present " << comparisons << endl;
        else
            cout << "Not Present " << comparisons << endl;
    }

    return 0;
}