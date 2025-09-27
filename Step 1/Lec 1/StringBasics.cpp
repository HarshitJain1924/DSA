#include<bits/stdc++.h>
using namespace std;


int main(){

    //1D Array
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    arr[3]+=30;
    cout<<arr[3]<<endl;

    //2D Array
    int arr2[3][5];

    arr2[2][5]= 67;
    cout<<arr2[2][5];

    return 0;
}