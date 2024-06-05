#include <iostream>

// Function to perform bubble sort in C++
void bubbleSort(int array[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        // Check if swapping occurs
        bool swapped = false;
        for (int i = 0; i < size - step - 1; ++i) {
            // Compare two adjacent elements
            if (array[i] > array[i + 1]) {
                // Swap elements if they are in the wrong order
                std::swap(array[i], array[i + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (!swapped) {
            break;
        }
    }
}

// Function to print the elements of an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

// Main function
int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);
    std::cout << "Unsorted Array: ";
    printArray(data, n);

    bubbleSort(data, n);
    
    std::cout << "Sorted Array: ";
    printArray(data, n);

    return 0;
}
