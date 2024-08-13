#include <iostream>
using namespace std;

int a, b;

void GCD() {
    for (int i = min(a, b); i > 0; i--) {
        if (a%i == 0 && b%i == 0) {
            cout << i << endl;
            break;
        }
    }
}

void LCM() {
    int multiple, largest = max(a, b);
    multiple = largest;
    int counter = 1;
    while (multiple % a != 0 || multiple% b != 0) {
        multiple = largest * counter;
        counter++;
    }
    cout << multiple << endl;
}

int main() {
    cin >> a >> b;
    GCD();
    LCM();
    return 0;
}