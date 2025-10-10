// Sum of divisors (excluding number) > number.
#include<iostream>
using namespace std;


int main(){
    int n, sum =0;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if(n/i!=i && n/i!=n){
                sum+=n/i;
            }
        }
    }
    if(sum>n){
        cout<<n<<" is Abundant Number";
    }
    else{
        cout<<n<<" is not Abundant Number";
    }
}