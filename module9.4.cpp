#include <iostream>

using namespace std;

int add(int num1, int num2){
    int addResult;

    addResult = num1 + num2;

    cout << addResult << endl;

    return 0;
}

int subtract(int num1, int num2){
    int addResult;

    addResult = num1 - num2;

    cout << addResult << endl;

    return 0;
}

int multiply(int num1, int num2){
    int addResult;

    addResult = num1 * num2;

    cout << addResult << endl;

    return 0;
}

int divide(int num1, int num2){
    int addResult;

    addResult = num1 / num2;

    cout << addResult << endl;

    return 0;
}

int mod(int num1, int num2){
    int addResult;

    addResult = num1 % num2;

    cout << addResult << endl;

    return 0;
}

int main(){
    int num1, num2;
    string op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    if(op == "+"){
        add(num1, num2);
    }
    else if(op == "-"){
        subtract(num1, num2);
    }
    else if(op == "*"){
        multiply(num1, num2);
    }
    else if(op == "/"){
        divide(num1, num2);
    }
    else if(op == "%"){
        mod(num1, num2);
    }

    return 0;
}