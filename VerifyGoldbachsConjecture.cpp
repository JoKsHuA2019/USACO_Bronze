#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int n, prime1, prime2, prime;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        prime1 = i;
        prime2 = n-i;
        prime = true;
        for (int j = 2; j < prime1; j++) {
            if (prime1 % j == 0) {
                prime = false;
                break;
            }
        }
        for (int j = 2; j < prime2; j++) {
            if (prime2 % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime == true) {
            break;
        }
    }
    cout << n << "=" << min(prime1, prime2) << "+" << max(prime1, prime2) << endl;
}