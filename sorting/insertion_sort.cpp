#include <iostream>
#include <vector>

void insertionSort(std::vector<int> &arr) {
    for (int i = 1; i < arr.size(); i++) {
        int k = arr[i];
        if (arr[i] < arr[i-1]) {
            int j = i - 1;
            while (j >= 0 && arr[j] > k) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = k;
        }
    }
}

int main() {
    std::vector <int> arr;
    int x;
    while (std::cin >> x) {
        arr.push_back(x);
    }

    insertionSort(arr);

    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}