#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int left, int right) {
    int pivot = arr[right]; 
    int i = left;
    
    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[right]);
    return i;
}

int kthSmallest(vector<int>& arr, int left, int right, int k) {
    if (left <= right) {
        int pos = partition(arr, left, right);

        // Found it!
        if (pos == k - 1) return arr[pos];
        
        // If position is too high, search the left side
        if (pos > k - 1) return kthSmallest(arr, left, pos - 1, k);
        
        // Otherwise, search the right side
        return kthSmallest(arr, pos + 1, right, k);
    }
    return -1; 
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        int k;
        cin >> k;

        if (k < 1 || k > n) {
            cout << "not present\n";
        } else {
            cout << kthSmallest(arr, 0, n - 1, k) << "\n";
        }
    }
    return 0;
}