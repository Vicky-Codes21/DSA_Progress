#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    // First index where nums[i] >= x
    int floor(vector<int>& nums, int n, int x) {
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
    int ceil(vector<int>& nums, int n, int x) {
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

    pair<int, int> floorceil(vector<int>& arr, int n, int x) {
        int f = floor(arr, n, x);
        int c = ceil(arr, n, x);

        return {f, c};
    }
};

int main() {

    int n = 6;
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int x = 8;

    solution obj;

    pair<int, int> ans = obj.floorceil(arr, n, x);

    cout << "Pairs are: " << ans.first << " " << ans.second;

    return 0;
}