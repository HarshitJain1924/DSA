#include<bits/stdc++.h>
using namespace std;

//write a program to check user is adult or not
void AdultCheck(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are an Adult"<<endl;
    }
    else{
        cout<<"You are not an Adult"<<endl;
    }
}

/*
Write a program to check grade of a student
if marks>=81 and marks<=90 then print A
if marks>=71 and marks<=80 then print B
if marks>=61 and marks<=70 then print C
if marks>=51 and marks<=60 then print D
if marks<=50 then print F
*/

void GradeCheck(){
    int marks;
    cin>>marks;
if(marks>=81 && marks<=90){
    cout<<"A";
}
else if(marks>=71 && marks<=80){
    cout<<"B";
}
else if(marks>=61 && marks<=70){
    cout<<"C";
}
else if(marks>=51 && marks<=60){
    cout<<"D";
}
else{
    cout<<"F";
}
}

//nested IF ELSE

/*
write a program to check user is eligible for job or not
1. user should be atleast 18 years old
2. user should have atleast 2 years of experience
3. user should have a degree
if all conditions are true then print "You are eligible for job"
else print "You are not eligible for job"
*/

void JobEligibilityCheck() {
    int age, exp;
    bool deg;
    cin >> age >> exp >> deg;

    if(age >= 18) {
        if(exp >= 2) {
            if(deg) {
                cout << "You are eligible for job" << endl;
            } else {
                cout << "You are not eligible for job" << endl;
            }
        } else {
            cout << "You are not eligible for job" << endl;
        }
    } else {
        cout << "You are not eligible for job" << endl;
    }
}



int main(){
    AdultCheck();
    GradeCheck();
    JobEligibilityCheck();
}