#include <iostream>
using namespace std;

int main() {
    const int jumlah = 7;

    long long nisn[jumlah] = {
        9960312699,
        9963959682,
        9950310962,
        9970272750,
        9970293945,
        9952382180,
        9965653989
    };

    string nama[jumlah] = {
        "Handi Ramadhan",
        "Rio Alfandra",
        "Ronaldo Valentino Uneputty",
        "Achmad Yaumil Fadjri R.",
        "Alivia Rahma Pramesti",
        "Ari Lutfian to",
        "Arief Budiman"
    };

    int nilai[jumlah] = {90, 55, 80, 60, 70, 65, 60};

    int target = 60;
    
    cout << "=== DATA SEBELUM DIUBAH ===\n";
    for (int i = 0; i < jumlah; i++) {
        cout << nisn[i] << " - " << nama[i] << " - Nilai: " << nilai[i] << endl;
    }

    cout << endl;
    
    for (int i = 0; i < jumlah; i++) {
        if (nilai[i] == target) {
            nama[i] = "Joko";
        }
    }

    cout << "=== DATA SETELAH DIUBAH ===\n";
    for (int i = 0; i < jumlah; i++) {
        cout << nisn[i] << " - " << nama[i] << " - Nilai: " << nilai[i] << endl;
    }

    system("pause");
    return 0;

}
