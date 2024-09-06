#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int idx){
    if(idx==-1) return;
    cout<<arr[idx]<<" ";
    reverse(arr,idx-1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n-1);
    return 0;
}