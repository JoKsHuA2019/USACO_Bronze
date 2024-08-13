#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int ans = 0, n, q, prime, num;
    cin >> q;
    for (int x = 0; x < q; x++) {
        cin >> n;
        num = n;
        ans = 0;
        for (int i = 2; i <= n;) {
            if (num == 1) {
                break;
            }
            prime = true;
            if (num % i == 0) {
                for (int j = 2; j < i; j++) {
                    if (i % j == 0) {
                        prime = false;
                        break;
                    }
                }
                if (prime) {
                    //cout << "num: " << num << ", ";
                    while (num % i == 0) {
                        num /= i;
                    }
                    //cout << "i: " << i << endl;
                    ans++;
                }
            }
            
            if (i == 2) {
                i++;
            }
            else {
                i+=2;
            }
        }
        cout << ans << endl;
    }
}