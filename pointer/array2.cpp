#include <iostream>

using namespace std;

int findMinIndex(int (&arr)[], int length){
    int minIndex = 0;
    for (int i = 0; i < length; ++i) {
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    int d[4] = {22, 2, 3, 4};

    cout << "minIndex: " << findMinIndex(&d, 4) << endl;

    return 0;
}