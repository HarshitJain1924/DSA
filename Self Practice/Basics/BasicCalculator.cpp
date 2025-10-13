// Simple Calculator using switch case

#include<iostream>
using namespace std;

int main(){
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op){
        case '+':
            cout << "Sum = " << a + b << endl;
            break;
        case '-':
            cout << "Difference = " << a - b << endl;
            break;
        case '*':
            cout << "Product = " << a * b << endl;
            break;
        case '/':
            if(b != 0)
                cout << "Quotient = " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
