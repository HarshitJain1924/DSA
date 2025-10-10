//A number is perfect if the sum of its proper divisors (excluding itself) equals the number.
#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            sum += i;
            if(n / i != i && n / i != n){
                sum += n / i;
            }
        }
    }

    if(sum == n)
        cout << n << " is a Perfect Number";
    else
        cout << n << " is Not a Perfect Number";
}
