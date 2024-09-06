#include<bits/stdc++.h>
using namespace std;
void sum(int arr[],int idx,int s){
     if(idx==-1){
        cout<<s<<endl;
        return;
     }
      sum(arr,idx-1,s+arr[idx]);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s= 0;
    sum(arr,n-1,s);
    return 0;
}