#include <iostream>

using namespace std;

int fib(){
    int num = 1;
    int num2 = num
    int fib1 = num + 1;
    
    cout << num << " + " << num2 << " = " << fib1;

    return 0;
} 

int main(){
    string doit;
    
    cout << "do you want to see it happen? ";
    cin >> doit;

    if(doit == "yes"){
        fib();
    }

    return 0;
}