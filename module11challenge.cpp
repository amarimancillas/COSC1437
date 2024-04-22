#include <iostream>
#include <vector>

using namespace std;

bool isVectorPalindrome(const vector<char>& chars) {
    if (chars.size() <= 1) {
        return true;
    }

    if (chars.front() != chars.back()) {
        return false;
    }

    vector<char> subVector(chars.begin() + 1, chars.end() - 1);
    
    return isVectorPalindrome(subVector);
}

int main() {
    vector<char> chars = {'r', 'a', 'c', 'e', 'c', 'a', 'r'};
    
    cout << "Original word: ";
    for (char c : chars) {
        cout << c << " ";
    }
    cout << endl;
    
    cout << "Is the vector a palindrome? " << boolalpha << isVectorPalindrome(chars) << endl;

    return 0;
}
