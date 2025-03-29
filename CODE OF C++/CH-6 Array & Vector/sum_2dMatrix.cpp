#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the rows: ";
    cin >> n;
    cout << "Enter the cols: ";
    cin >> m;

    int arr[n][m];

    // Input
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j]; 
        }
    }

    int sum=0;
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < m; j++) {
            sum += arr[i][j]; 
        }
    }
    cout<<sum;


    return 0;
}