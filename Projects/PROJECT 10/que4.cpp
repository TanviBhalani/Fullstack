#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx])
                minIdx = j;
        swap(arr[i], arr[minIdx]);
    }
}

// Merge sort
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[MAX_SIZE], R[MAX_SIZE];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

// Linear Search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target)
            return i;
}

// Binary Search 
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

}

// Print the array
void printArray(int arr[], int n) {
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main menu-driven program
int main() {
    int arr[MAX_SIZE];
    int n = 0;
    bool isSorted = false;

    int choice, element;

    while (true) {
        cout << "\n--- Menu ---\n";
        cout << "1. Enter Array\n";
        cout << "2. Selection Sort\n";
        cout << "3. Merge Sort\n";
        cout << "4. Linear Search\n";
        cout << "5. Binary Search\n";
        cout << "6. Display Array\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter number of elements (max " << MAX_SIZE << "): ";
            cin >> n;
            if (n > MAX_SIZE || n <= 0) {
                cout << "Invalid size!" << endl;
                n = 0;
                break;
            }
            cout << "Enter " << n << " elements:" << endl;
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            break;

        case 2:
            selectionSort(arr, n);
            cout << "Array sorted using Selection Sort." << endl;
            break;

        case 3:
            mergeSort(arr, 0, n - 1);
            cout << "Array sorted using Merge Sort." << endl;
            break;

        case 4:
            cout << "Enter element to search: " << endl;
            cin >> element;
            {
                int index = linearSearch(arr, n, element);
                if (index != -1)
                    cout << "Element found at index: " << index << endl;
                else
                    cout << "Element not found." << endl;
            }
            break;

        case 5:
            if (!isSorted) {
                cout << "Array must be sorted before performing Binary Search." << endl;
            } else {
                cout << "Enter element to search: ";
                cin >> element;
                int index = binarySearch(arr, n, element);
                if (index != -1)
                    cout << "Element found at index: " << index << endl;
                else
                    cout << "Element not found." << endl;
            }
            break;

        case 6:
            printArray(arr, n);
            break;

        case 0:
            cout << "Exiting program." << endl;

        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}
