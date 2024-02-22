#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int bat1, bat2, bat3, bat4, bat5, bat6, bat7, bat8;

    cout << "Enter a batting average: ";
    cin >> bat1;

    cout << "Enter a batting average: ";
    cin >> bat2;

    cout << "Enter a batting average: ";
    cin >> bat3;

    cout << "Enter a batting average: ";
    cin >> bat4;

    cout << "Enter a batting average: ";
    cin >> bat5;

    cout << "Enter a batting average: ";
    cin >> bat6;

    cout << "Enter a batting average: ";
    cin >> bat7;

    cout << "Enter a batting average: ";
    cin >> bat8;

    int average = (bat1 + bat2 + bat3 + bat4 + bat5 + bat6 + bat7 + bat8)/8;

    int averageArray[8] = {bat1, bat2, bat3, bat4, bat5, bat6, bat7, bat8};
    
    int n = sizeof(averageArray) / sizeof(averageArray[0]);

    cout << "\nThe average of the array is " << average << endl; 
    cout << "\nMin Element = " << *min_element(averageArray, averageArray + n) << endl;
    cout << "\nMax Element = " << *max_element(averageArray, averageArray + n) << endl;

    return 0;
}