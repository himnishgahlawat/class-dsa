#include<iostream>
#include<vector>
using namespace std;

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    vector<int> bubble = arr;
    bubbleSort(bubble);

    cout << "\nBubble Sort: ";
    for(int x : bubble) {
        cout << x << " ";
    }

    // Selection Sort
    vector<int> selection = arr;
    selectionSort(selection);

    cout << "\nSelection Sort: ";
    for(int x : selection) {
        cout << x << " ";
    }

    return 0;
}