#include <iostream>
#include <vector>

using namespace std;

int vectorSum(const vector<int>& numbers){
    if (numbers.empty()) {
        return 0;
    }

    return numbers[0] + vectorSum(vector<int>(numbers.begin() + 1, numbers.end()));
}

int main(){
    vector<int> numbers({1, 2, 3, 4, 5});

    int sum = vectorSum(numbers);
    cout << "The sum is: " << sum << endl;

    return 0;
}