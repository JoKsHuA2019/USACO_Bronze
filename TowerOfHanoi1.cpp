#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int totalMoves = 1;
    for (int i = 1; i < n; i++) {
        totalMoves = 2 * totalMoves + 1;
    }
    cout << totalMoves << endl;
}