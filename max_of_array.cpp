#include<bits/stdc++.h>
using namespace std;
 void printMax(int arr[], int n,int idx,int mx){
    if(idx==n){   //base case
        cout<<mx<<endl;
        return;
    }
     if(mx<arr[idx]) mx = arr[idx];
     printMax(arr,n,idx+1,mx);
}
void printMax(int arr[], int i,int mx){
   if(i==-1){   //base case
        cout<<mx<<endl;
        return;
   }
   mx = max(mx,arr[i]);
   printMax(arr,i-1,mx);
}
int Maxele(int arr[], int i,int mx){
     if(i==-1){
        return mx;
     }
      mx = max(mx,arr[i]);
      Maxele(arr,i-1,mx);
}
int maX(int arr[], int i){
     if(i==-1) return INT_MIN;
     return max(arr[i],maX(arr,i-1));   
}
int main(){
    int arr[] = {3,1,43,5,2,4,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMax(arr,n,0,INT_MIN);
    printMax(arr,n,INT_MIN);
    cout<<Maxele(arr,n-1,INT_MIN)<<endl;
    cout<<maX(arr,n-1)<<endl;
    return 0;
}
