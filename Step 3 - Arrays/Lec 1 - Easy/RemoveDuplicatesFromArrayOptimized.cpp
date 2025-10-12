#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 3, 4};
    int n = 5;
    int i = 0;

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    cout << "Unique count: " << i + 1 << endl;
    cout << "Array after removing duplicates: ";
    for (int k = 0; k <= i; k++)
        cout << arr[k] << " ";
}
