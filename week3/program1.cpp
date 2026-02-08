#include <iostream>
#include <vector>
using namespace std;

void insertionSortWithCount(vector<int>& arr, int n) {
    int comparisons = 0;
    int shifts = 0;

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            comparisons++; 

            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                shifts++;   
                j--;
            } else {
                break;
            }
        }
        arr[j + 1] = key;
    }

   
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    cout << "comparisons = " << comparisons << endl;
    cout << "shifts = " << shifts << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        insertionSortWithCount(arr, n);
    }

    return 0;
}