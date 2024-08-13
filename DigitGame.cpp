#include <iostream>
using namespace std;

int main() {
    string str;
    int ans = 0;
    cin >> str;
    for (int i = 0; i < 8; i++) {
        if (str[i] == '1') {
            ans++;
        }
    }
    cout << ans << endl;
}