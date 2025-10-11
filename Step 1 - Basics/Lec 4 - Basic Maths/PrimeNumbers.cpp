#include<iostream>
using namespace std;

void CheckPrime(int n){
    int count = 0;
    for(int i= 1;i<=n;i++){
        if(n%i==0){
            count += 1;
        }
    }
    if(count ==2){
        cout<<"true";
    }
    else cout<<"false";
    cout<<endl;
}
void CheckPrimeOptimize(int n){
    int count = 0;
    for(int i= 1;i*i<=n;i++){
        if(n%i==0){
            count += 1;
            if(n/i!=i){
                count++;
            }
        }
    }
    if(count ==2){
        cout<<"true";
    }
    else cout<<"false";
}

int main(){
    int n;
    cin>>n;
    CheckPrime(n);
    CheckPrimeOptimize(n);
}