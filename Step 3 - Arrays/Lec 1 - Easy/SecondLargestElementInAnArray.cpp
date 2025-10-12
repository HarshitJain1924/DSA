#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int l = 1;
    int sl = -1;

    for(int i=0;i<5;i++){
        if(arr[i]>l) l = arr[i];
    }

    for(int i = 0;i<5;i++){
        if(arr[i]>sl && arr[i]<l){
            sl = arr[i];
        }
    }
    cout<<sl<<endl;
}