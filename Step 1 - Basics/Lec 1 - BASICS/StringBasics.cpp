#include<bits/stdc++.h>
using namespace std;


int main(){
    string s = "Hello";
    int len = s.size();
    s[len-1] = 'z';
    cout<<s[len-1]<<endl;
    cout<<s;
}