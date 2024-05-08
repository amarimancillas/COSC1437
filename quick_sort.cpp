#include <iostream>

using namespace std;

void swap(int a, int b)
{
    //swap the values
    int t = a;
    a = b;
    b = t;
}

//partition
int partition(int arr[], int low, int high)
{
    //pivot element
    int pivot = arr[high];
    int i = (low - 1);

    //iterate
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]); 
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        //partition
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

//display the array's elements function
void displayArray(int arr[], int size)
{
    //displaying the elements
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements separated by spaces: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Input array" << endl;
    displayArray(arr, n);
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Array sorted with quick sort" << endl;
    displayArray(arr, n);

    return 0; 
}
