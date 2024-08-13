#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

int n, m, ans = 0;
char arr[6][6];

bool valid(int x, int y) {
    return x < n && x >= 0 && y < m && y >= 0 && arr[x][y] != '#';
}

void rec(int x, int y, int length) {
     if (!valid(x, y)) {
        return;
     }
     if (x == n-1 && y == m-1){
        ans++;
        return;
     }
     arr[x][y] = '#';
     rec(x, y+1, length+1);
     rec(x+1, y, length+1);
     rec(x, y-1, length+1);
     rec(x-1, y, length+1);
     arr[x][y] = '*';
}

int main() {
    memset(arr, 0, sizeof(arr));
    cin >> n >> m;
    cin.ignore();
    string o;
    for (int i = 0; i < n; i++) {
        getline(cin, o);
        for (int j = 0; j < m; j++) {
            arr[i][j] = o[j];
        }
    }
    rec(0, 0, 1);
    cout << ans << endl;
    return 0;
}