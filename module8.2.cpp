#include <iostream>
#include <string>

using namespace std;

int main(){
    string names[20];
    int ages[20];
    int grades[20];

    int classSize;
    int count;

    cout << "Enter the number of students in the class: ";
    cin >> classSize;

    for(int i =0;i < classSize; i++){
        cout << "\nEnter the first name of a student: ";
        cin >> names[i];
        cout << "\nEnter the age of the student: ";
        cin >> ages[i];
        cout << "\nEnter the grade of the student: ";
        cin >> grades[i];
    }
    
    for (int i = 0;i < classSize;i++){
        cout << "Name: " << names[i] << " " << "Age: " << ages[i] << " " << "Grade: " << grades[i] << " " << endl;
    }

    return 0;
}