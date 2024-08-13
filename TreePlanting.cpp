#include <iostream>
using namespace std;

int main() {
    int n, m, l, r, treesPlanted = 0;
    cin >> n;
    n += 1;
    int road[n];
    fill_n(road, n, 0);
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
        for (int j = l; j <= r; j++) {
            if (road[j] == 0) {
                road[j] = 1;
                treesPlanted += 1;
            }
        }
        cout << treesPlanted << endl;
    }
    return 0;
}