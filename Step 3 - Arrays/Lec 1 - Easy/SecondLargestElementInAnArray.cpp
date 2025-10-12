#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,5,5};
    int largest = 1;
    int slargest = -1;

    for(int i=0;i<5;i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>largest){
            slargest = arr[i];
        }
    }

    cout<<slargest<<endl;
}