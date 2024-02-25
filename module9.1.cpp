#include <iostream>
#include <string>

using namespace std;

string choice;

void discount(){
    cout << "You are pre-registered and qualify for a 5% discount." << endl;
}

void noDiscount(){
    if(choice == "N"){
        cout << "Sorry, you did not pre-register and do not qualify for a 5% discount." << endl;
    }
}

int main(){
    cout << "Did you preregister? Enter Y or N: ";
    cin >> choice;
    
    if(choice == "Y"){
        discount();
    }
    else{
        noDiscount();
    }
    
    return 0;
}