#include <iostream>

using namespace std;

int sum(int num){
    int sum = 0;
    
    for(int i = 1; i <= num; i++){
        sum += i;
    }

    cout << "The sum is: " << sum << endl;

    return sum;
}

int product(int num) {
    int product = 1;
    
    for (int i = 1; i <= num; i++) {
        product *= i;
    }

    cout << "The product is: " << product << endl;

    return product;
}


int main(){
    int num;
    
    cout << "Enter a positive integer or 0 to quit: ";
    cin >> num;
    
    if(num > 0){
        sum(num);
        product(num);
    }
    else if(num == 0){
        exit(0);
    }
}