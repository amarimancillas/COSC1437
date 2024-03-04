#include <iostream>

using namespace std;

double sum;
double num1;
double num2;

void sumMethod(){
    double sumR = num1 + num2;
    cout << "Sum is: " << sumR << endl;
}

void differenceMethod(){
    double differenceR = num1 - num2;
    cout << "Difference is: " << differenceR << endl;
}

void productMethod(){
    double productR = num1 * num2;
    cout << "Product is: " << productR << endl;
}

int main(){
    cout << "Enter first numeric value: ";
    cin >> num1;

    cout << "Enter second numeric value: ";
    cin >> num2;

    sumMethod();
    differenceMethod();
    productMethod();
    return 0;
}