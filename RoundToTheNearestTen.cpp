#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n%10 < 5) {
        n -= n%10;
    }
    else {
        n += 10-n%10;
    }
    cout << n << endl;
}