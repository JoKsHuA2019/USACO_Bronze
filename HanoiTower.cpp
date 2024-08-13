#include <iostream>
using namespace std;

void hanoi(int k, int start, int middle, int end) {
    if (k == 1) {
        cout << start << "->" << end << endl;
        return;
    }
    hanoi(k-1, start, end, middle);
    cout << start << "->" << end << endl;
    hanoi(k-1, middle, start, end);
}

int main() {
    int n;
    cin >> n;
    int totalMoves = 1;
    for (int i = 1; i < n; i++) {
        totalMoves = 2 * totalMoves + 1;
    }
    hanoi(n, 1, 2, 3);
    cout << "tot=" << totalMoves << endl;
}