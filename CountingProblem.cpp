#include <iostream>
using namespace std;

int main() {
    int n, x, num, c = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        num = i;
        for (int j = 0; j < to_string(i).length(); j++) {
                if (num%10 == x) {
                    c += 1;
                }
                num = num/10;
            }
        }
    cout << c;
    return 0;
}