#include <iostream>
#include <climits>
using namespace std;

int arr[10];

void inserties(int num, int index, int end) {
    int prevNumber = arr[index];
    arr[index] = num;
    int currentNumber;
    for (int i = index+1; i <= end; i++) {
         currentNumber = arr[i];
         arr[i] = prevNumber;
         prevNumber = currentNumber;
    }
}

int main() {
    int odd = 0, even = 9, num;
    for (int i = 0; i < 10; i++) {
        cin >> num;
        if (num % 2 != 0) {
            arr[odd] = num;
            odd++;
        }
        else {
            arr[even] = num;
            even--;
        }
    }
    int smallest = INT_MAX, largest = INT_MIN, largestIndex = 0, smallestIndex = 0;
    for (int i = 0; i < 10; i++) {
        num = arr[i];
        if (num % 2 != 0) {
            for (int j = i; j < odd; j++) {
                if (arr[j] > largest) {
                    largest = arr[j];
                    largestIndex = j;
                }
            }
            swap(arr[largestIndex], arr[i]);
        }
        else {
            for (int j = i; j <= 9; j++) {
                if (arr[j] < smallest) {
                    smallest = arr[j];
                    smallestIndex = j;
                }
            }
            swap(arr[smallestIndex], arr[i]);
        }
        largest = INT_MIN;
        smallest = INT_MAX;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}