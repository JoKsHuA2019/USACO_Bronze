#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i = 1, n;
    cin >> n;
    for (int j = 1; j <= n; j++) {
        for (int z = 0; z < j; z++) {
        cout << setw(4) << right << i;
        i += 1;
        }
        cout << endl;
    }
    return 0;
}