#include <iostream>
#include <vector>

using namespace std;

int factorial(int n) {
    int result = 1;
    
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = factorial(num);

    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}