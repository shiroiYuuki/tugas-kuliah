#include <iostream>
using namespace std;

void metodeSeleksi(long long arr[], int n)
{
    for (int i = 1; i < n; ++i) {
        long long key = arr[i];
        long long j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(long long arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    long long nisn[7] = {9960312699, 9963959682, 9950310962, 9970272750, 9970293945, 9952382180, 9965653989};
    int jumlahArray = sizeof(nisn) / sizeof(nisn[0]);

    metodeSeleksi(nisn, jumlahArray);
    printArray(nisn, jumlahArray);

    system("pause");
    return 0;
} 