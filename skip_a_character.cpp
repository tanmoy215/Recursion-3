#include<bits/stdc++.h>
using namespace std;

string skip(string str, int i, string s) {
    if (i == str.length()) return s;
    if (str[i] != 'a') s += str[i];
    return skip(str, i + 1, s); // Return the result of the recursive call
}

int main() {
    string str = "Tanmoy Majee";
    for(char &c : str){
        c == tolower(c);
    }
    cout << skip(str, 0, "");
    return 0;
}
