#include<iostream>
using namespace std;

int main(){
    int n = 5,temp;
    int arr[n] = {1,2,3,4,5};

    temp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }

    arr[0] = temp;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}