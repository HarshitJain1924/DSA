#include<iostream>
using namespace std;

//Brute Force
int GCD(int n1,int n2){
    int GCD=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            GCD = i;
        }
    }
    return GCD;
}
//Better Approach
int GCDOptimized(int n1,int n2){
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return 1;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int result1 = GCD(n1,n2);
    int result2 = GCDOptimized(n1,n2);
    cout<<result1<<" "<<result2;
}