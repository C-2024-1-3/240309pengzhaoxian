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
    cout << "����������Ԫ�ظ���: ";
    cin >> size;
    int* arr = new int[size];
    cout << "����������Ԫ��: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sortArray(arr, size);
    cout << "����������Ԫ����: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}