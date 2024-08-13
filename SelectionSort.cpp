#include <iostream>
#include <climits>
using namespace std;

int n, mins = INT_MAX, min_index = 0;
int arr[1001];

void selectionSort() {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[j] < mins) {
                mins = arr[j];
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
        mins = INT_MAX;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    selectionSort();
    return 0;
}