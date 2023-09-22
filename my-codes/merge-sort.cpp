#include <iostream>
#include <vector>
using namespace std;

void merge (vector<int> vector, const int start, const int midIndex, const int end) {

    

}

void mergeSort (vector<int> vector, const int start, const int end) {

    // base case
    if (start >= end) {
        return;
    }

    int midIndex = start + (end - start) / 2;

    mergeSort(vector, start, midIndex);
    mergeSort(vector, midIndex + 1, end);

    merge(vector, start, midIndex, end);
}

int main () {

    vector<int> vector {12, 11, 13, 5, 6, 7};
    
    mergeSort(vector, 0, vector.size() - 1);
    
    for(int i : vector) {
        cout << i << " ";
    }
    return 0;
}