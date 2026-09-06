//Brute force
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the majority element in an array
    int majorityElement(vector<int>& nums,int & n) {
        
      
        
        // Iterate through each element of the array
        for (int i = 0; i < n; i++) {
            
            // Counter to count occurrences of nums[i]
            int cnt = 0; 
            
            // Count the frequency of nums[i] in the array
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    cnt++;
                }
            }
            
            // Check if frequency of nums[i] is greater than n/2
            if (cnt > (n / 2)) {
                // Return the majority element
                return nums[i]; 
            }
        }
        
        // Return -1 if no majority element is found
        return -1; 
    }
};

int main() {
    int n;
    cout<<"Enter number of element : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // Create an instance of Solution class
    Solution sol;
 
    int ans = sol.majorityElement(arr,n);
    
    // Print the majority element found
    cout << "The majority element is: " << ans << endl;
    
    return 0;
}