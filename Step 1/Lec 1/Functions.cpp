#include<bits/stdc++.h>
using namespace std;

//Functions are set of code which performs something for you
//Functions are used to modularize code
//Functions are used to increase readability
//Functions are used to use same code multiple times
//void -> which does not returns anything
//return
//parameterized
//non parameterized

void PrintName(string name){ //non return, parameterized
    cout<<"Hey "<<name<<endl;
}

//return type
int sum(int a, int b){
    int sum = a+b;
    return sum;
}


//pass by value - make chance in copy not original
void PassByValue(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

//pass by reference - make chances in original value
void PassByReference(string &s){
    s[0]='T';
    cout<<s<<endl;
}



int main(){
    string name, name2;

    int a,b;

    cin>>name>>name2>>a>>b;

    PrintName(name);
    PrintName(name2); //reuse

    int res = sum(a,b);
    cout<<res<<endl;
    cout<<endl;
    

    int num = 10;
    PassByValue(num);
    cout<<num<<endl;
    cout<<endl;


    string s = "Raj";
    PassByReference(s);
    cout<<s<<endl;
    return 0;
}