#include<bits/stdc++.h>
using namespace std;

int PrintAllDivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int PrintAllDivisorsOptimize(int n){
    vector<int> ls;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
            if(n/i!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls) cout<<it<<" ";
}

int main(){
    int n,x;
    cin>>n>>x;
    PrintAllDivisors(n); //Time Complexity - o(n);
    PrintAllDivisorsOptimize(x); //Time Complexity - o(sqrt(n))
}




