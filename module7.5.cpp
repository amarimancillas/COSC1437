#include <iostream>

using namespace std;

int main(){
    for (int i = 0; i < 5; ++i) {
        if (i == 0 || i == 2 || i == 4) {
            for (int j = 0; j < 3; ++j) {
                cout << "*";
            }
        } else {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}