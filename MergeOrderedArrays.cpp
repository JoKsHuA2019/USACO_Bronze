#include <iostream>
using namespace std;

int main() {
    int n = 0, m = 0, num, ncounter = 0, mcounter = 0;
    int arr1[100000];
    int arr2[100000];
    int arrc[200000];
    while (cin >> num) {
        if (num != -1) {
            arr1[n] = num;
            n++;
        }
        else break;
    }
    while (cin >> num) {
        if (num != -1) {
            arr2[m] = num;
            m++;
        }
        else break;
    }
    int i = 0;
    while (n != 0 && m != 0) {
        if (arr1[ncounter] > arr2[mcounter]) {
            arrc[i] = arr1[ncounter];
            ncounter++;
            n--;
        }
        else {
            arrc[i] = arr2[mcounter];
            mcounter++;
            m--;
        }
        i++;
    }
    if (n != 0) {
        while (n != 0) {
            arrc[i] = arr1[ncounter];
            ncounter++;
            n--;
            i++;
        }
    }
    else if (m != 0) {
        while (m != 0) {
            arrc[i] = arr2[mcounter];
            mcounter++;
            m--;
            i++;
        }
    }
    for (int j = 0; j < ncounter+mcounter; j++) {
        cout << arrc[j] << " ";
    }
}