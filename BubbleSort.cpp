//This bubble sort is optimized to detect whether or not we need to keep looping through the number set
//Finds out if it is already sorted and if so, terminates the program
#include <iostream>
using namespace std;

int n;
bool doneCheck = true;
int arr[1001];

void bubbleSort() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                swap(arr[j], arr[j + 1]);
                doneCheck = false;
            }
        }
        if (doneCheck) {
            break;
        }
        else doneCheck = true;
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
    bubbleSort();
    return 0;
}