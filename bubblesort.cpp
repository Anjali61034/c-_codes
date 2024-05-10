#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Declare array after getting the size
    int arr[n];

    // Input elements into the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble sort algorithm to sort the array
    for(int counter = 1; counter < n; counter++) {
        for(int i = 0; i < n - counter; i++) {
            if(arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    // Output the sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}
