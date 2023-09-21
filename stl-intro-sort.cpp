#include <algorithm>
#include <iostream>
using namespace std;

int main() {

    int arr[] = {3, 5, 1, 2, 4};

    // intro sort uses a mix of quickSort(default) -> HeapSort -> insertionSort(if array size is small)
    sort(begin(arr), end(arr));

    for(int i : arr) {
        cout << i << " ";
    }
    return 0;
}