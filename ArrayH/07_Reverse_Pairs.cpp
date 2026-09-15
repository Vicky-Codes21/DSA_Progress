#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    // Count reverse pairs between left and right half
    int countPairs(vector<int>& arr, int st, int mid, int end) {

        int count = 0;
        int j = mid + 1;

        // Check every element of left half
        for (int i = st; i <= mid; i++) {

            // Find elements in right half satisfying:
            // arr[i] > 2 * arr[j]
            while (j <= end && arr[i] > 2LL * arr[j]) {
                j++;
            }

            // All elements before j form reverse pairs
            count += j - (mid + 1);
        }

        return count;
    }


    // Merge two sorted halves
    int merge(vector<int> &arr, int st, int mid, int end) {

        vector<int> temp;

        int i = st;       // Pointer for left half
        int j = mid + 1; // Pointer for right half

        int count = 0;   // Normal inversion count (not used here)

        // Compare both halves and store smaller element
        while (i <= mid && j <= end) {

            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            }
            else {
                temp.push_back(arr[j]);
                j++;

                // Normal inversion count
                count += (mid - i + 1);
            }
        }

        // Add remaining left elements
        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }

        // Add remaining right elements
        while (j <= end) {
            temp.push_back(arr[j]);
            j++;
        }

        // Copy sorted elements back to original array
        for (int idx = 0; idx < temp.size(); idx++) {
            arr[idx + st] = temp[idx];
        }

        return count;
    }


    // Merge Sort + Reverse Pair counting
    int mergesort(vector<int>& arr, int st, int end) {

        // Base case: single element
        if (st < end) {

            // Find middle
            int mid = st + (end - st) / 2;

            // Count reverse pairs in left half
            int leftcount = mergesort(arr, st, mid);

            // Count reverse pairs in right half
            int rightcount = mergesort(arr, mid + 1, end);

            // Count reverse pairs between both halves
            int count = countPairs(arr, st, mid, end);

            // Merge both sorted halves
            merge(arr, st, mid, end);

            // Total reverse pairs
            return count + leftcount + rightcount;
        }

        // No reverse pair in one element
        return 0;
    }


    // Main function
    int reversePairs(vector<int>& nums) {

        // Apply merge sort on complete array
        return mergesort(nums, 0, nums.size() - 1);
    }
};
int main(){
       // Create input array
    vector<int> nums = {1, 3, 2, 3, 1};

    // Create object of Solution class
    Solution obj;

    // Call reversePairs()
    int answer = obj.reversePairs(nums);

    // Print answer
    cout << "Reverse pairs = " << answer << endl;

    return 0;
}