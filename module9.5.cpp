#include <iostream>

using namespace std;

int normal(int num1, int num2, int num3, int num4, int num5){
    cout << "Original contents of array:" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << num5 << endl;
    
    return 0;
}

int reverse(int num1, int num2, int num3, int num4, int num5){
    cout << "Reversed contents of array:" << endl;
    cout << num5 << endl;
    cout << num4 << endl;
    cout << num3 << endl;
    cout << num2 << endl;
    cout << num1 << endl;
    
    return 0;
}

int main(){
    int num1, num2, num3, num4, num5;

    cout << "Enter #1: ";
    cin >> num1;
    cout << "Enter #2: ";
    cin >> num2;
    cout << "Enter #3: ";
    cin >> num3;
    cout << "Enter #4: ";
    cin >> num4;
    cout << "Enter #5: ";
    cin >> num5;

    normal(num1, num2, num3, num4, num5);
    reverse(num1, num2, num3, num4, num5);

    return 0;
}