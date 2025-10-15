#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return index if element found
        }
    }
    return -1;  // Return -1 if element not found
}

int main() {
    int n, key;
    
    // Taking number of elements as input
    cout << "Enter number of elements in array: ";
    cin >> n;
    
    int arr[n];
    
    // Taking array elements as input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Taking search key as input
    cout << "Enter element to search: ";
    cin >> key;
    
    // Calling linear search function
    int result = linearSearch(arr, n, key);
    
    // Displaying result
    if (result != -1) {
        cout << key << " found at index " << result << endl;
        cout << "Position: " << result + 1 << endl;
    } else {
        cout << key << " not found in the array" << endl;
    }
    
    return 0;
}
