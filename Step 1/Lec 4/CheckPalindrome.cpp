#include<iostream>
using namespace std;

int main(){
    int n,digit,rev=0;
    cin>>n;
    int dup = n;
    while(n>0){
        digit=n%10;
        rev = (rev*10)+digit;
        n/=10;
    }
    if(rev == dup){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}