#include <iostream>
using namespace std;
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                int t = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = t;
            }
        }
    }
}
int main() {
    int size;
    cout << "请输入数组元素个数: ";
    cin >> size;
    int* arr = new int[size];
    cout << "请输入数组元素: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sortArray(arr, size);
    cout << "排序后的数组元素是: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}