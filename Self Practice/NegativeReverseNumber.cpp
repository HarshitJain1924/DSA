#include<iostream>
using namespace std;

int main(){
    int n,digit,rev=0;
    cin>>n;
    bool isNegative;
    if(n<0){
        isNegative = true;
        n = -n;
    }

    while(n>0){
        digit = n%10;
        rev = (rev*10) + digit;
        n /= 10;
    }

    if(isNegative) rev = -rev;

    cout<<rev;
}