#include <iostream>
#include <climits>
#include <queue>
using namespace std;

struct state {
    int x;
    char dir;
};

int B, E, ans = 0;
queue<state> Bessie, Elsie;

void bfskindof() {
    int bprev = 0, eprev = 0, prevdiff = 0;
    state b, e;
    while (!Bessie.empty() || !Elsie.empty()) {
        if (!Bessie.empty()) {
            b = Bessie.front();
        }
        if (!Elsie.empty()) {
            e = Elsie.front();
        }
        cout << bprev << ", " << eprev << " | " << endl;
        if (b.dir == 'L' && !Bessie.empty()) {
            bprev -= b.x;
        }
        else if (b.dir == 'R' && !Bessie.empty()) {
            bprev += b.x;
        }
        if (e.dir == 'L' && !Elsie.empty()) {
            eprev -= e.x;
        }
        else if (e.dir == 'R' && !Elsie.empty()) {
            eprev += e.x;
        }
        if (!Elsie.empty()) {
            Elsie.pop();
        }
        if (!Bessie.empty()) {
            Bessie.pop();
        }
        if (prevdiff != (bprev - eprev)/abs(bprev - eprev) && prevdiff != 0) {
            cout << prevdiff << " -> " << (bprev - eprev)/abs(bprev - eprev) << " | " << bprev << ", " << eprev << endl;
            ans++;
        }
        prevdiff = (bprev - eprev)/abs(bprev - eprev);
    }
}

int main() {
    cin >> B >> E;
    int num;
    char direction;
    for (int i = 0; i < B; i++) {
        cin >> num;
        cin.ignore();
        cin >> direction;
        state m;
        m.x = num;
        m.dir = direction;
        Bessie.push(m);
    }
    for (int j = 0; j < E; j++) {
        cin >> num;
        cin.ignore();
        cin >> direction;
        state m;
        m.x = num;
        m.dir = direction;
        Elsie.push(m);
    }
    bfskindof();
    cout << ans;
}