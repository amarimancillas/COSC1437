#include <iostream>

using namespace std;

int main(){
    char hand;
    int lefthand = 0;
    int righthand = 0;

    cout << "Enter L if left-handed, R if right-handed, or X to quit:" << endl;
    
    while (true){
        cout << "Enter your handedness (L/R/X): ";
        cin >> hand;

        if (hand == 'X')
            break;
        else if (hand == 'L')
            lefthand++;
        else if (hand == 'R')
            righthand++;
        else
            cout << "Invalid input." << endl;
    }

    cout << "Number of left-handed students: " << lefthand << endl;
    cout << "Number of right-handed students: " << righthand << endl;

    return 0;
}
