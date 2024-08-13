//have a queue of pairs
//keep pushing in the moves while adding to them
#include <iostream>
#include <cstring>
#include <queue>
#include <iomanip>
using namespace std;

int n, m;
int dist[1000][1000];
bool visited[1000][1000];
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2}, dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
queue<pair<int, int> > points;

bool valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && visited[x][y] == false;
} 

void bfs(int x, int y) {
    dist[x][y] = 0;
    points.push(make_pair(x, y));
    while (!points.empty()) {
        auto pair = points.front();
        points.pop();
        cout << pair.first << ", " << pair.second << endl;
        for (int i = 0; i < 8; i++) {
            if (valid(pair.first + dx[i], pair.second + dy[i])) {
                points.push(make_pair(pair.first + dx[i], pair.second + dy[i]));
                dist[pair.first + dx[i]][pair.second + dy[i]] = dist[pair.first][pair.second]+1;
            }
        }
        visited[pair.first][pair.second] = true;
    }
}

int main() {
    int x, y;
    memset(dist, -1, sizeof(dist));
    memset(visited, false, sizeof(visited));
    cin >> n >> m >> x >> y;
    bfs(x-1, y-1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(5) << left << dist[i][j];
        }
        cout << endl;
    }
    return 0;
}