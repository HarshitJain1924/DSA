#include<iostream>
using namespace std;

int main(){
    int target,n = 5;    
    cin>>target;
    bool isTargetPresent = false;
    int arr[n] = {1,2,3,4,5};

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            isTargetPresent = true;
            cout<<i;
            break;
        }
    }
    if(isTargetPresent == false){
        cout<<-1;
    }
}