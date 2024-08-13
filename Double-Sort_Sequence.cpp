#include <iostream>
#include <climits>
using namespace std;

int n, minimum = INT_MAX, maximum = INT_MIN, mins = INT_MAX, min_index = 0, bottomCounter = 0, topCounter;
int arr[1001];
int ans[1001];

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
}

void doubleSortSequence() {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans[i] = arr[topCounter];
            topCounter--;
        }
        else {
            ans[i] = arr[bottomCounter];
            bottomCounter++;
        }
        cout << ans[i] << endl;
    }
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    topCounter = n-1;
    selectionSort();
    doubleSortSequence();
    return 0;
}