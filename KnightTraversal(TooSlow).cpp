//Same as floodfill, but with different moving coordinates
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int n, m, x, y;
int arr[401][401];
bool visited[401][401] = {false};
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2}, dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

bool valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && visited[x][y] == false;
}

void dfs(int x, int y, int count) {
    if (!valid(x, y)) {
        return;
    }
    if (arr[x][y] > count || arr[x][y] == -1) {
        arr[x][y] = count;
    }
    visited[x][y] = true;
    for (int i = 0; i < 8; i++) {
        dfs(x + dx[i], y + dy[i], count + 1);
    }
    visited[x][y] = false;
}

int main() {
    memset(arr, -1, sizeof(arr));
    cin >> n >> m >> x >> y;
    dfs(x-1, y-1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(5) << left << arr[i][j];
        }
        cout << endl;
    }
}