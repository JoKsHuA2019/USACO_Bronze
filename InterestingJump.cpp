#include <iostream>
#include <cmath>
#include <climits>
#include <cstring>
using namespace std;

int main() {
    int n, diff, ans = true, prevNum, num;
    cin >> n;
    int arrdiff[100001];
    int arrcompare[100001];
    memset(arrcompare, false, sizeof(arrcompare)/sizeof(arrcompare[0]));
    cin >> prevNum;
    for (int i = 0; i < n - 1; i++) {
        cin >> num;
        arrdiff[i] = abs(prevNum - num);
        prevNum = num;
    }
    for (int i = 0; i < n - 1; i++) {
        arrcompare[arrdiff[i]-1] = true;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arrcompare[i] == false) {
            ans = false;
            break;
        }
    }
    if (ans) cout << "yes" << endl;
    else cout << "no" << endl;
}