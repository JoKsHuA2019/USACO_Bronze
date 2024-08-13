#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int n, minimum = INT_MAX, maximum = INT_MIN, minimum_index = 0, maximum_index = 0, frontNum = 0, endNum = 0;
int arr[101];

void arrayRearrangement() {
    for (int i = 0; i < n; i++) {
        if (arr[i] < minimum) { 
            minimum = arr[i];
            minimum_index = i;
        }
        if (arr[i] > maximum) {
            maximum = arr[i];
            maximum_index = i;
        }
    }
    //make the largest go first and smallest go last
    //this is to make sure that none of the values get overridden if we directly swap() them
    frontNum = arr[0];
    //cout << "endNum: " << endNum << endl;
    arr[0] = maximum;
    for (int i = 1; i < n; i++) {
        if (arr[i] == maximum) {
            arr[i] = frontNum;
            break;
        }
    }
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    //cout << endl;
    endNum = arr[n - 1];
    arr[n - 1] = minimum;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == minimum) {
            arr[i] = endNum;
            break;
        }
    }
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    //cout << endl;
    //cout << "maximum number: " << maximum << endl;
    //cout << "minimum number: " << minimum << endl;
    for (int j = 0; j < n - 2; j++) {
        for (int i = 1; i < n - 2; i++) {  //If the index is between the second and third to last index in the array
            if (arr[i + 1] < arr[i]) {     //Third to last index because we access the index one more than the current to compare
                swap(arr[i], arr[i + 1]);
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
    arrayRearrangement();
    return 0;
}