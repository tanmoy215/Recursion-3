#include<bits/stdc++.h>
using namespace std;
void hanoi(int n, char a, char b ,char c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1,b,a,c);
}
int main(){
     int n = 4;
     hanoi(n,'A','B','C');
     cout<<"Total moves : "<<pow(2,n)-1<<endl;
    return 0;
}