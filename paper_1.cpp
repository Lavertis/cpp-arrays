#include <iostream>
#include <random>

using namespace std;

void printArray(int arr[], int size);

void fillArrayWithRandomNumbers(int arr[], int size, int min, int max);

void printElementsWithIndexBeingSquareOfNaturalNumber(int arr[], int size);

void findMaxElement(const int arr[], int size);

void findMinElementAndCountOccurrence(const int arr[], int size);

void insertElement(int arr[], int size, int index, int element);

void removeElement(int arr[], int size, int index);

void swapElements(int arr[], int size, int index1, int index2);

void findMaxElementAndCountOccurrence(const int arr[], int size);

int main() {
    int size;
    cout << "Enter size of array:";
    cin >> size;
    int arr[size];

    cout << endl << "Fill array with random numbers in range [0, 15]:" << endl;
    fillArrayWithRandomNumbers(arr, size, 0, 15);
    printArray(arr, size);

    cout << endl << "Print elements with index being square of natural number:" << endl;
    printElementsWithIndexBeingSquareOfNaturalNumber(arr, size);

    cout << endl << endl << "Find max element in array:" << endl;
    findMaxElement(arr, size);

    cout << endl << "Find min element in array and count:" << endl;
    findMinElementAndCountOccurrence(arr, size);

    cout << endl << "Insert element at given index:" << endl;
    int index, element;
    cout << "Enter index: ";
    cin >> index;
    cout << "Enter element: ";
    cin >> element;
    insertElement(arr, size, index, element);
    printArray(arr, size);

    cout << endl << "Delete element at given index:" << endl;
    cout << "Enter index: ";
    cin >> index;
    removeElement(arr, size, index);
    printArray(arr, size);

    cout << endl << "Swap two elements:" << endl;
    cout << "Enter index1: ";
    cin >> index;
    cout << "Enter index2: ";
    cin >> index;
    swapElements(arr, size, index, index);
    printArray(arr, size);

    cout << endl << "Find max number in array and count:" << endl;
    findMaxElementAndCountOccurrence(arr, size);
    return 0;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillArrayWithRandomNumbers(int arr[], int size, int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    for (int i = 0; i < size; i++) {
        arr[i] = dis(gen);
    }
}

void printElementsWithIndexBeingSquareOfNaturalNumber(int arr[], int size) {
    for (int i = 0; i * i < size; i++)
        cout << arr[i * i] << " ";
}

void findMaxElement(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Max element: " << max << endl;
}

// function to find min element and count occurrence
void findMinElementAndCountOccurrence(const int arr[], int size) {
    int min = arr[0];
    int count = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            count = 1;
        }
        else if (arr[i] == min) {
            count++;
        }
    }
    cout << "Min element: " << min << endl;
    cout << "Count: " << count << endl;
}

// function to insert element at given index
void insertElement(int arr[], int size, int index, int element) {
    // check if index is valid
    if (index < 0 || index > size) {
        cout << "Invalid index" << endl;
        return;
    }

    // shift elements to the right
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // insert element
    arr[index] = element;
}

// function to delete element at given index
void removeElement(int arr[], int size, int index) {
    // check if index is valid
    if (index < 0 || index >= size) {
        cout << "Invalid index" << endl;
        return;
    }

    // shift elements to the left
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // delete last element
    arr[size - 1] = 0;
}

// function to swap two elements
void swapElements(int arr[], int size, int index1, int index2) {
    // check if index is valid
    if (index1 < 0 || index1 >= size || index2 < 0 || index2 >= size) {
        cout << "Invalid index" << endl;
        return;
    }

    // swap elements
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

// function to find max element and count occurrence
void findMaxElementAndCountOccurrence(const int arr[], int size) {
    int max = arr[0];
    int count = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            count = 1;
        }
        else if (arr[i] == max) {
            count++;
        }
    }
    cout << "Max element: " << max << endl;
    cout << "Count: " << count << endl;
}