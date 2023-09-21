// quick sort -> (pivot)
#include <iostream>
using namespace std;

int partition (int array[], int start, int end) {

    int pivotElement = array[end];

    // to keep track of the final position of the pivot element
    int i = start - 1;

    for (int j = start; j < end; j++) {

        if (array[j] < pivotElement) {
            i++;
            swap(array[i], array[j]);
        }
    }

    int newPivotIndex = i + 1;
    swap(array[newPivotIndex], array[end]);
    int partitionIndex = newPivotIndex;    
    
    return partitionIndex;
}

void quickSort (int array[], int start, int end) {

    // base case
    if (start >= end) {
        return;
    }

    // partition
    int partitionIndex = partition(array, start, end);

    // sort left part
    quickSort(array, start, partitionIndex - 1);

    // sort right part
    quickSort(array, partitionIndex + 1, end);
}

int main () {

    int array[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int arraySize = sizeof(array) / sizeof(array[0]);

    quickSort(array, 0, arraySize - 1);

    for(int i : array) {
        cout << i << " ";
    }
    return 0;
}