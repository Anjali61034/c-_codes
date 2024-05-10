#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1; // e should be initialized as the last index of the array

    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == key) {
            return mid; // return the index where the element is found
        } else if (key < arr[mid]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return -1; // return -1 if the element is not found
}

int main() {
    int n, key;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n]; // declare the array after getting its size

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> key;

    int result = binarysearch(arr, n, key);
    if (result == -1) {
        cout << "Element not found";
    } else {
        cout << "Element found at index: " << result;
    }

    return 0;
}


