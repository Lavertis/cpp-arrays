#include "iostream"

using namespace std;

void printArray(int arr[], int size);

void printArrayReversed(int arr[], int size);

void readNumbersToArray(int arr[], int size);

void task_3();

void task_4();

int main() {
    task_3();
    task_4();
    return 0;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArrayReversed(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void readNumbersToArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void task_3() {
    int arr[30];
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    if (size < 1 || size > 30) {
        cout << "The given number is greater than the value of the declared array" << endl;
        return;
    }
    readNumbersToArray(arr, size);
    cout << "The array is: ";
    printArray(arr, size);
}

void task_4() {
    int size;
    cout << "Enter the number of elements:";
    cin >> size;
    int arr[size];
    readNumbersToArray(arr, size);
    cout << "The array is: ";
    printArray(arr, size);

    cout << "Check if array contains number:";
    int number;
    cin >> number;
    int position = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            position = i;
        }
    }
    if (position == -1) {
        cout << "The number is not in the array" << endl;
    }
    else {
        cout << "The number is in the array at position " << position << endl;
    }

    // every element to the power of 3rd
    int arrPow3[size];
    for (int i = 0; i < size; i++) {
        arrPow3[i] = arr[i] * arr[i] * arr[i];
    }
    cout << endl << "The array with elements to the power of 3rd is: " << endl;
    printArray(arrPow3, size);

    // every element multiplied by 2
    int arrMultipliedBy2[size];
    for (int i = 0; i < size; i++) {
        arrMultipliedBy2[i] = arr[i] * 2;
    }
    cout << endl << "The array with elements multiplied by 2 is: " << endl;
    printArray(arrMultipliedBy2, size);

    // add 10 to even elements
    int arrPlus10[size];
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            arrPlus10[i] = arr[i] + 10;
        }
        else {
            arrPlus10[i] = arr[i];
        }
    }
    cout << endl << "The array with added 10 to even elements is: " << endl;
    printArray(arrPlus10, size);

    // print array elements which are in range [4, 20)
    cout << endl << "The array with elements in range [4, 20) is: " << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 4 && arr[i] < 20) {
            cout << arr[i] << " ";
        }
    }

    // print elements with even indexes
    cout << endl << endl << "The array with even indexes only is: ";
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
}