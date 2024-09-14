#include<bits/stdc++.h>
using namespace std;

// Helper function to generate subsets
void subset(vector<int> ans, vector<int>& nums, int n, int i, bool flag){
    // Base case: if index reaches the end, print the subset
    if(i == n){
        for(auto x : ans){
            cout << x;  // Print elements of the subset
        }
        cout << endl;
        return;
    }

    int ch = nums[i]; // Current element

    // If we are at the last element
    if(i == n - 1){
        if(flag) subset(ans, nums, n, i + 1, true);  // Recursive call without adding current element
        ans.push_back(ch);                           // Add current element to subset
        subset(ans, nums, n, i + 1, true);           // Recursive call after adding current element
        return;
    }

    int dh = nums[i + 1]; // Next element

    // If current element is the same as the next one (duplicate case)
    if(ch == dh){
        if(flag) subset(ans, nums, n, i + 1, false);  // Call without adding current element
        ans.push_back(ch);                            // Add current element to subset
        subset(ans, nums, n, i + 1, true);            // Call after adding current element
    }
    else{
        // Case when the current element is not a duplicate
        subset(ans, nums, n, i + 1, true);            // Call without adding current element
        ans.push_back(ch);                            // Add current element to subset
        subset(ans, nums, n, i + 1, true);            // Call after adding current element
    }
}

int main(){
    vector<int> nums = {1, 1, 2};  // Input set with duplicates
    int n = nums.size();
    vector<int> ans;
    
    // Sort the input set to handle duplicates in a sorted manner
    sort(nums.begin(), nums.end());
    
    // Generate subsets
    subset(ans, nums, n, 0, true);
    
    return 0;
}
