#include<bits/stdc++.h>
using namespace std;

//Array are always pass byt reference

int main(){

    //1D Array
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    arr[3]+=30;
    cout<<arr[3]<<endl;

//###########################################

    //2D Array
    int arr2[3][5];

    arr2[2][5]= 67;
    cout<<arr2[2][5]<<endl;
//###########################################

    int arr3[5];

    //taking array input via loop
    for(int i=0;i<=4;i++){
        cin>>arr3[i];
    }
    //displaying array output via loop
    for(int i=0;i<=4;i++){
        cout<<arr3[i]<<endl;
    }

    return 0;
}