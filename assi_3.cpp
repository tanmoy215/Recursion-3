#include<bits/stdc++.h>
using namespace std;
int Ind(int arr[],int idx,int target){
    if(idx==-1)return -1;
    if(arr[idx]==target) return idx;
    return Ind(arr,idx-1,target);
}
int main(){
    int arr[] = {1,2,3,45,6,7,9};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"enter target value : ";
    cin>>target;
   cout<<Ind(arr,n-1,target)<<endl;
    return 0;
}