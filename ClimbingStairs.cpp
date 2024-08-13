#include <iostream>
#include <cstring>
using namespace std;

long long arr[1001] = {-1};
int n, ans = 0;

long long rec(int stair) {
    if (stair <= 1) {
        return 1;
    }
    if (stair == 2) {
        return 2;
    }
    if (arr[stair] != -1) {
        return arr[stair];
    }
    arr[stair] = (rec(stair-3) + rec(stair-2) + rec(stair-1))%998244353;
    return arr[stair];
}

int main() {
    cin >> n;
    memset(arr, -1, sizeof(arr));
    cout << rec(n);
    return 0;
}