//start with array initialized to 0
//place a queen and increment all squares that it affects
//create a separate horizontal, vertical, and diagonal array of numbers that represents each row and diagonal that is filled.
//Calculate diagonal placement by subtracting the x and y values because each diagonal has one value that it subtracts to
//increment by n-1 to prevent an out of bounds error
//keep going (cardinal directions) until the number of queens reaches n

#include <iostream>
using namespace std;

int n, ans = 0;
int hori[15] = {0}, Udiag[25] = {0}, Ddiag[25] = {0};

bool valid(int x, int y) {
    return hori[x] == 0 && Udiag[x+y] == 0 && Ddiag[x-y+n-1] == 0;
}

void dfs(int index) {
    if (index == n) {
        ans++;
        return;
    }
    for (int i = 0; i < n; i++) {awd 
        if (!valid(i, index)) {
            continue;
        }
        hori[i] = true;
        Udiag[index+i] = true;
        Ddiag[i-index+n-1] = true;
        dfs(index+1);
        hori[i] = false;
        Udiag[index+i] = false;
        Ddiag[i-index+n-1] = false;
    }
}

int main() {
    cin >> n;
    dfs(0);
    cout << ans << endl;
    return 0;
}