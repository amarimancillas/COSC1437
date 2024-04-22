#include <iostream>
#include <vector>

using namespace std;

bool findElement(const vector<int>& numbers, int target, int index) {
    if (index >= numbers.size()) {
        return false;
    }
    
    if (numbers[index] == target) {
        return true;
    }
    
    return findElement(numbers, target, index + 1);
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    int target = 3;
    
    cout << "Target found: " << boolalpha << findElement(numbers, target, 0) << endl;
    
    return 0;
}