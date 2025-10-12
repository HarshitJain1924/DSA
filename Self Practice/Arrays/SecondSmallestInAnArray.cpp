#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[5] = {1,1,3,4,5};

    int s = arr[0];
    int ss = INT_MAX;

    for(int i = 0;i<5;i++){
        if(arr[i]<s){
            ss = s;
            s = arr[i];
        }
        else if(arr[i]>s && arr[i]<ss){
            ss = arr[i];
        }
    }
    cout<<ss;
}