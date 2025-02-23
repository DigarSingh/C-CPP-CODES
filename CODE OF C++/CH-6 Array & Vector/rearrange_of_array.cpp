#include <iostream>
#include <vector>

using namespace std;

void rearrangeArray(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp;
    
    // Move all negative numbers to temp
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            temp.push_back(arr[i]);
    }
    
    // Move all positive numbers to temp
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0)
            temp.push_back(arr[i]);
    }
    
    // Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    vector<int> arr = {1, -2, 3, -4, 5, -6, 7, -8, 9};

    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    rearrangeArray(arr);

    cout << "Rearranged array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
