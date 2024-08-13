#include <iostream>
#include <climits>
using namespace std;

int n, m, startx, starty, start = INT_MIN, endd = INT_MAX, endx, endy, maxLength = INT_MIN;
int arr[100][100];

bool valid(int x, int y) {
    return x < n && x >= 0 && y < m && y >= 0;
}

void rec(int x, int y, int px, int py, int length) {
    if (arr[px][py] < arr[x][y] || !valid(x, y)) {
        return;
    }
    if (x == endx && y == endy) {
        maxLength = max(maxLength, length);
        return;
    }
    rec(x, y+1, x, y, length+1);
    rec(x+1, y, x, y, length+1);
    rec(x, y-1, x, y, length+1);
    rec(x-1, y, x, y, length+1);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (start < arr[i][j]) {
                start = arr[i][j];
                startx = i;
                starty = j;
            }
            if (endd > arr[i][j]) {
                endd = arr[i][j];
                endx = i;
                endy = j;
            }
        }
    }
    rec(startx, starty, startx, starty, 1);
    cout << maxLength << endl;
    return 0;
}