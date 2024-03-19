#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;


void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {

    setlocale(LC_ALL, "Ukrainian");

    srand(time(NULL));

    const int size = 11;
    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; 
    }

    cout << "Початковий масив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    shellSort(arr, size);

    cout << "Вiдсортований масив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}