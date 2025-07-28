#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Manual swap without using std::swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print the reversed array
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl; // Output: 5 4 3 2 1

    return 0;
}
