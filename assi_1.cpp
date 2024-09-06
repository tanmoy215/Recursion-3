#include<bits/stdc++.h>
using namespace std;
int Findmin(int arr[],int idx){
    if(idx==-1){
        return INT_MAX;
    }
    return min(arr[idx],Findmin(arr,idx-1));
}
int main(){
    //find minimum element
    int arr[] = {1,2,4,0,5,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
     cout<<Findmin(arr,n-1)<<endl;
    return 0;
}