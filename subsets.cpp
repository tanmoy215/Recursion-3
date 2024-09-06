#include<bits/stdc++.h>
using namespace std;
// void subsets(string ans, string str){
//     if(str == ""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = str[0];
//     subsets(ans+ch,str.substr(1));
//     subsets(ans,str.substr(1));
// }
void subsets(string ans, string str,vector<string>& v){  //store the value into a vector
     if(str==""){
        v.push_back(ans);
        return;
     }
     char ch = str[0];
     subsets(ans+ch,str.substr(1),v);
     subsets(ans,str.substr(1),v);
}
int main(){
      string str = "abc";
      vector<string> v;
       subsets("",str,v);
       for(string s : v){
         cout<<s<<endl;
       }
    return 0;
}