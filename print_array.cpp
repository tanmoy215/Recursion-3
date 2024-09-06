#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[], int i){
     if(i<0) return;
     printarray(arr,i-1);
     cout<<arr[i]<<" ";
}
int main(){
    int arr[] = {3,1,43,5,2,4,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n-1);
    return 0;
}