#include<iostream>
using namespace std;

string isSorted(int arr[], int n) {
    bool asc = true, desc = true;
    
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1])
            asc = false;
        if(arr[i] > arr[i - 1])
            desc = false;
    }

    if(asc)
        return "Sorted in Ascending order";
    else if(desc)
        return "Sorted in Descending order";
    else
        return "Not Sorted";
}

int main() {
    int arr[5] = {1, 2, 2, 3, 4};
    cout << isSorted(arr, 5);
}
