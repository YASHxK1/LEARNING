#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 2; // index of element to delete (30)

    // Shift elements to left from pos
    for (int i = pos; i < size - 1; i++)    {
        arr[i] = arr[i + 1];
    }

    size--; // reduce size since one element is "removed"

    // Print updated array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
