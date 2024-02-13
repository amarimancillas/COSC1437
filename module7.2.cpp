#include <iostream>

using namespace std;

int main() {
    int score;
    int totalscores = 0;
    int songs = 0;

    while (true) {
        cout << "Enter score for top song: ";
        cin >> score;

        if (score < 0) {
            break;
        }

        totalscores += score;
        songs++;
    }

    if (songs > 0) {
        double averagescore = (totalscores) / songs;
        cout << "Average Star Value: " << averagescore << endl;
    } 

    return 0;
}
