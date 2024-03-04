#include <iostream>

using namespace std;

Sum(int num){
    int sum ;
    
    for(int i =1 ; i<num;i++){
        sum += i;
    }
    return sum;
}

pro(int num){
    int pro =1 ;
    
    for(int i =1 ; i<num;i++){
        sum = i * sum;
    }
}

int main(){
    int num;
    
    cout << "Enter a positive integer or 0 to quit: ";
    cin >> num;
    
    if(num>0){
        cout << "The sum is " << sum(num) << ".";
        cout <<"The product is " << pro(num) << ".";
    }

    while(num <0){
    cout << "Enter a positive integer or 0 to quit: ";
        cin >> num;
        cout << "The sum is " << sum(num) << ".";
        cout <<"The product is " << pro(num) << ".";
    }
}