#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

int n, ans = 0, shortest = INT_MAX;
int arr[52][52];

bool valid(int x, int y) {
    return x < n && x >= 0 && y < n && y >= 0 && arr[x][y] != 1;
}

void rec(int x, int y, int length) {
     if (!valid(x, y)) {
        return;
     }
     if (x == n-1 && y == n-1){
        if (length < shortest) {
            shortest = length;
            ans = 1;
        }
        else if (length == shortest) ans++;
        return;
     }
     arr[x][y] = 1;
     rec(x, y+1, length+1);
     rec(x+1, y, length+1);
     rec(x, y-1, length+1);
     rec(x-1, y, length+1);
     arr[x][y] = 0;
}

int main() {
    memset(arr, 0, sizeof(arr));
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    rec(0, 0, 1);
    cout << ans << endl;
    cout << shortest << endl;
    return 0;
}