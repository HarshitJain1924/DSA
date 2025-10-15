#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int target){

    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==target) return mid;
        else if (arr[mid]>target) high = mid-1;
        else low = mid+1;
    }
    return -1;
}

int main(){
    int n=5,target;
    cout<<"Enter target to Search"<<endl;
    cin>>target;
    int arr[n] = {1,2,3,4,5};

    cout<<BinarySearch(arr,n,target);
}