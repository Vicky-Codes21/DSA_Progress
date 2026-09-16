#include <bits/stdc++.h>
using namespace std;

class solution {
public:

    int floor(vector<int>& nums, int x) {
        int n = nums.size();
        int st = 0;
        int end = n - 1;
        int ans = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] <= x) {
                ans = nums[mid];
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }

    int ceil(vector<int>& nums, int x) {
        int n = nums.size();
        int st = 0;
        int end = n - 1;
        int ans = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] >= x) {
                ans = nums[mid];
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return ans;
    }

    pair<int, int> floorandceil(vector<int>& arr, int x) {
        int f = floor(arr, x);
        int c = ceil(arr, x);

        return make_pair(f, c);
    }
};

int main() {
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int x = 5;

    solution obj;

    pair<int, int> value = obj.floorandceil(arr, x);

    cout << "The Floor is: " << value.first << endl;
    cout << "The Ceil is: " << value.second << endl;

    return 0;
}