#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int num1 = mid - left + 1;
    int num2 = right - mid;

    //creates the smaller arrays
    int leftArray[num1], rightArray[num2];

    for(i = 0; i < num1; i++) {
        leftArray[i] = arr[left + i];
    }
    for(j = 0; j < num2; j++) {
        rightArray[j] = arr[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    //compares the smaller arrays and merges them
    while(i < num1 && j < num2) {
        if(leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    //takes the leftover numbers
    while(i < num1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while(j < num2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

//merge function
void mergeSort(int arr[], int left, int right) {
    if(left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid); // Sort left half
        mergeSort(arr, mid + 1, right); // Sort right half
        merge(arr, left, mid, right); // Merge sorted halves
    }
}

int main() {
    //array to be sorted
    int arr[] = {12, 54, 24, 18, 3};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    //calling function to sort
    mergeSort(arr, 0, arrSize - 1);

    //prints the sorted elements
    cout << "Sorted array: ";
    for(int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
