#include <iostream>
using namespace std;

int n, counter = 0;
bool doneCheck = false; //not used
int arr[1001];

void bubbleSort() {
    for (int i = 0; i < n; i++) {
        if (doneCheck == false) {
            for (int j = 0; j < n - 1; j++) {
                if (arr[j + 1] < arr[j]) {
                    swap(arr[j], arr[j + 1]);
                    counter += 1;
                }
            }
        }
    }
    cout << counter << endl;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubbleSort();
    return 0;
}