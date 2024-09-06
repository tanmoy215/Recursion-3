#include<bits/stdc++.h>
using namespace std;
void subsets(int arr[],int n,int i ,vector<int> ans){
      if(i==n){
         for(int ele : ans){
             cout<<ele<<" ";
         }
         cout<<endl;
         return;
      }
         subsets(arr,n,i+1,ans);
         ans.push_back(arr[i]);
         subsets(arr,n,i+1,ans);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
     vector<int> v;
         subsets(arr,n,0,v);
     return 0;
}