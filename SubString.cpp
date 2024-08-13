#include <iostream>
using namespace std;

int main() {
    string a;
    int l, r;
    cin >> a;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        cout << a[i];
    }
}