#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());
        int i = 0, j = 1;
        while (i < n && j < n) {
            if (i == j) {
                j++;
                continue;
            }
            int diff = abs(arr[j] - arr[i]);
            if (diff == x) {
                return 1;
            } else if (diff < x) {
                j++;
            } else {
                i++;
                if (i > j) {
                    j = i + 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value of x: ";
    cin >> x;

    Solution solution;
    int result = solution.findPair(n, x, arr);

    if (result == 1) {
        cout << "Pair with absolute difference " << x << " exists." << endl;
    } else {
        cout << "Pair with absolute difference " << x << " does not exist." << endl;
    }

    return 0;
}
