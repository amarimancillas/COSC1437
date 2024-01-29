#include <iostream>

using namespace std;

int main()
{
    double feet;
    double inches;

    cout << "Type the feet that you want to convert to inches: ";
    cin >> feet;

    inches = (feet * 12);

    cout << feet << " is " << inches << " inches.";
    

    
    return 0;
}