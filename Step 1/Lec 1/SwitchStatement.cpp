#include<bits/stdc++.h>
using namespace std;

/*
Take a day no and print corresponding day
for day 1 print Monday
for day 2 print Tuesday and so on till day 7
*/

int main(){
    int day;
    cin>>day;
    switch(day){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Invalid";
    }
}