#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,digit,sum=0,dup2;
    cin>>n;
    int count=0;
    int dup = n;
    dup2 = n;
    while(n>0){
        count+=1;
        n/=10;
    }
    while(dup>0){
        digit = dup%10;
        sum = sum + (pow(digit,count));
        dup/=10;
    }

    if(sum == dup2){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}