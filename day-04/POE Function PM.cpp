#include <iostream>
#include <algorithm> // Needed for std::sort
using namespace std;

const int SIZE = 5;

// Compact Function Declarations
void populateArray(int arr[]) {
    cout << "Enter " << SIZE << " numbers:\n";
    for (int i = 0; i < SIZE; i++)
        cin >> arr[i];
}

int countEven(const int arr[]) {
    int count = 0;
    for (int i = 0; i < SIZE; i++)
        if (arr[i] % 2 == 0) count++;
    return count;
}

void displayAll(const int arr[]) {
    for (int i = 0; i < SIZE; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void displayOdds(const int arr[]) {
    for (int i = 0; i < SIZE; i++)
        if (arr[i] % 2 != 0)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int numbers[SIZE];

    // 1. Input values
    populateArray(numbers);

    // 2. Display all values (Part 1 requirement)
    cout << "\nAll values: ";
    displayAll(numbers);

    // 3. Count and display evens
    cout << "Count of even numbers: " << countEven(numbers) << "\n";

    // 4. Display odd values
    cout << "Odd numbers: ";
    displayOdds(numbers);

    // 5. Sort values using built-in C++ sort tool
    sort(numbers, numbers + SIZE);

    // 6. Display sorted values
    cout << "Sorted values: ";
    displayAll(numbers); // Reusing the display function to keep code short!

    return 0;
}
