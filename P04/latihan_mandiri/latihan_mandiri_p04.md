# 2. Code Soal No 2 
```
#include <iostream>
using namespace std;

int main() {
    double a, b, c, terbesar;

    cout << "Masukkan bilangan pertama (a): ";
    cin >> a;
    cout << "Masukkan bilangan kedua (b): ";
    cin >> b;
    cout << "Masukkan bilangan ketiga (c): ";
    cin >> c;

    if (a >= b && a >= c) {
        terbesar = a;
    } else if (b >= c) {
        terbesar = b;
    } else {
        terbesar = c;
    }

    cout << "Bilangan terbesar adalah: " << terbesar << endl;

    return 0;
}
```
# 3. tahun kabisat 
```
#include <iostream>
using namespace std;

int main() {
    int tahun;

    cout << "Masukkan tahun: ";
    cin >> tahun;

    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        cout << tahun << " adalah tahun kabisat." << endl;
    } else {
        cout << tahun << " bukan tahun kabisat." << endl;
    }

    return 0;
}
```
# 4. ubah `switch_menu.cpp`
```
# include <iostream>
using namespace std;

int main() { 
    char pilihan = 0; 
    
    cout << "=== Menu SiNilai ===\n"; 
    cout << "1. Tampilkan kartu nilai\n"; 
    cout << "2. Hitung ulang\n"; 
    cout << "3. Keluar\n"; 
    cout << "k. Keluar (huruf)\n"; 
    cout << "Pilihan: "; 
    cin >> pilihan; 
    switch (pilihan) { 
    case '1': 
        cout << "Menampilkan kartu nilai...\n"; 
        break; 
    case '2': 
        cout << "Menghitung ulang...\n"; 
        break; 
    case '3': 
    case 'k': 
        cout << "Sampai jumpa.\n"; 
        break; 
    default: 
        cout << "Pilihan tidak dikenal.\n"; 
    }
    return 0; 
}
```
# 5. ubah `bertingkat.cpp` menggunakan `switch` pada `static_cast<int>(nilai) / 10`. 
```
# include <iostream>
using namespace std;

int main() { 
    double nilai = 0; 
    cout << "Nilai akhir: "; 
    cin >> nilai; 

    int kelompok = static_cast<int>(nilai) / 10;

    switch (kelompok) { 
    case 10: 
    case 9: 
    case 8: 
        cout << "Huruf mutu: A\n"; 
        break; 
    case 7: 
        cout << "Huruf mutu: B\n"; 
        break; 
    case 6: 
        cout << "Huruf mutu: C\n"; 
        break; 
    default: 
        cout << "Huruf mutu: D\n"; 
    }
    return 0; 
}
```