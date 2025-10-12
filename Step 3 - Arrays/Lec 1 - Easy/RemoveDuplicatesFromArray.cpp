#include<set>
#include<iostream>
using namespace std;

int main(){
    set<int> st;
    int n=12;
    int arr[n] = {1,2,3,4,5,5,5,5,3,4,5,8};
    for(int i =0;i<n;i++){
        st.insert(arr[i]);
    }
    /*
    int index=0;
    for(auto it:st){
        index++;
    }
    cout<<index;
    */
    cout<<st.size(); //this is faster
}