#include <iostream>

using namespace std;

int main(){
    int i = 0;

    cout << "0 through 10 multiplied by 2 and by 10." << endl;
    
    do {
        cout << "Number: " << i << endl;
        cout << "Multiplied by 2: " << i * 2 << endl;
        cout << "Multiplied by 10: " << i * 10 << endl;
        i++;
    } while (i <= 10);
    
    return 0;
}
