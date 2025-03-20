#include <iostream>

using namespace std;

int findLargest(int arr[], int N) {
    int max = arr[0]; 
    
    for (int i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    
    return max;
}

int main() {
    int N;
    
    cout << "Enter the size of the array: ";
    cin >> N;
    
    int arr[N];
    
    cout << "Enter " << N << " elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int largest = findLargest(arr, N);
    cout << "The largest element in the array is: " << largest << endl;
    
    return 0;
}
 