#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    
    cout << "Please type your full name: ";
    //cin >> name;

    getline(cin, name);

    cout << name << endl;

    return 0;
}