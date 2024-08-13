#include <iostream>
#include <vector>
using namespace std;

vector<int> plants;
int a, b, c, n, m, num;

int main() {
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> num;
    plants.push_back(num);
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> a >> b >> c;
    for (int j = a-1; j < b; j++) {
      plants[j] += c;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << plants[i] << " ";
  }
}