//Sum of the factorial of digits equals the number.
#include<iostream>
using namespace std;
int Factorial(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}
int main(){
    int n,digit,dup,sum=0;
    cin>>n;
    dup = n;
    while(n>0){
        digit = n%10;
        sum += Factorial(digit);
        n/=10;
    }
    if(sum == dup){
        cout<<dup<<" is Strong Number";
    }
    else{
        cout<<dup<<" is not Strong Number";
    }
}