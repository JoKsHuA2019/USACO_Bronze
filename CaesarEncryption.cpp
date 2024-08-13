#include <iostream>
using namespace std;

int main() {
    string str;
    char encry;
    int t;
    int capS = (int)('A'), capE = (int)('Z'), lowS = (int)('a'), lowE = (int)('z');

    cin >> str;
    cin >> t;
    if (t >= 26) {
        t = t%26;
    }
    for (int i = 0; i < str.length(); i++) {
        //if adding t goes out of the range of the capital letters
        if (capS <= (int)str[i] && (int)str[i] <= capE && t > capE - (int)str[i]) {
            encry = (char)(((int)str[i]) - 26 + t);
        }
        //if adding t goes out of the range of the lowercase letters
        else if (lowS <= (int)str[i] && (int)str[i] <= lowE && t > lowE - (int)str[i]) {
            encry = (char)(((int)str[i]) - 26 + t);
        }
        else encry = (char)(((int)str[i]) + t);
        cout << encry;
    }
}