#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    // First index where nums[i] >= x
    int lowerBound(vector<int>& nums, int n, int x) {
        int st = 0, end = n - 1;
        int ans = n;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] >= x) {
                ans = mid;
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return ans;
    }

    // First index where nums[i] > x
    int upperBound(vector<int>& nums, int n, int x) {
        int st = 0, end = n - 1;
        int ans = n;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] > x) {
                ans = mid;
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return ans;
    }

    int occurrences(vector<int>& nums, int n, int x) {

        int first = lowerBound(nums, n, x);
        int last = upperBound(nums, n, x);

        // x does not exist
        if (first == n || nums[first] != x) {
            return 0;
        }

        return last - first;
    }
};

int main() {

    int n = 7;
    vector<int> array = {2, 2, 3, 3, 3, 3, 4};
    int x = 3;

    solution obj;

    int ans = obj.occurrences(array, n, x);

    cout << "Occurrences: " << ans;

    return 0;
}