#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>& nums,int idx, vector<int> temp,vector<vector<int>>& ans){
    ans.push_back(temp);
    for(int i=idx;i<nums.size();i++){
        if(i!=idx && nums[i]==nums[i-1]) continue;
        temp.push_back(nums[i]);
        subset(nums,idx+1,temp,ans);
        temp.pop_back();
    }
}
int main(){
    vector<int> nums{1,2,2};
    vector<int> temp;
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    subset(nums,0,temp,ans);
    //print vector
          for (const auto& row : ans) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout <<endl;  // Move to the next line after each row
    }
    return 0;
}