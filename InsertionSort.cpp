#include <iostream>
using namespace std;

int n, prev = 0;
int arr[1001];

void swappies(int newPlace, int origin) {
    int previousNum, currentNum;
    previousNum = arr[newPlace];
    arr[newPlace] = arr[origin];
    for (int i = newPlace + 1; i <= origin; i++) {
        currentNum = arr[i];
        arr[i] = previousNum;
        previousNum = currentNum;
    }
}

void insertionSort() {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[i]) {
                swappies(j, i);
            }
        }
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
    insertionSort();
    return 0;
}