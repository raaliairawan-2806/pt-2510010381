Siap, ini versi santai dan langsung intinya aja:

1. **Nomor 1 (SiNilai v0.1 + Prodi):**

```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    string npm;
    string prodi;
    int kehadiran;
    double mingguan;
    int uts;
    int uas;
    
    cout << "=== SiNilai v0.1 ===\n";
    cout << "Nama      : ";
    getline(cin, nama);
    cout << "NPM       : ";
    getline(cin, npm);
    cout << "Program Studi : ";
    getline(cin, prodi);
    cout << "Kehadiran : ";
    cin >> kehadiran;
    cout << "Mingguan  : ";
    cin >> mingguan;
    cout << "UTS       : ";
    cin >> uts;
    cout << "UAS       : ";
    cin >> uas;

    cout << "\n--- Kartu Data Mahasiswa ---\n";
    cout << "Nama      : " << nama << endl;
    cout << "NPM       : " << npm << endl;
    cout << "Program Studi : " << prodi << endl;
    cout << "Kehadiran : " << kehadiran << endl;
    cout << "Mingguan  : " << mingguan << endl;
    cout << "UTS       : " << uts << endl;
    cout << "UAS       : " << uas << endl;

    return 0;
}


```

2.**Mengubah `tipe_dasar.cpp` agar `lulus` dicetak sebagai `true/false`**
```cpp
 bool lulus = true;

// Tambahkan boolalpha agar tercetak 'true' atau 'false'
cout << boolalpha;
cout << "Lulus : " << lulus << "\n";

```
3. **Perbedaan Sikap Compiler pada Inisialisasi Nilai**
* `int nilai = 85.7;`\
Lolos tanpa *warning*, pecahan langsung dibuang jadi `85` (konversi implisit).


* `int nilai{85.7};`\
Ditolak compiler (*error narrowing conversion*) karena melarang kehilangan data pecahan.

4. **Nomor 4 (Variabel Jelek & Perbaikan):**

* **`x`dan`y`** 
alasannya karena terlalu singkat,dan tidak memiliki arti konteks lebih baik `totalharga` atau `indeksbaris`
* **`data`** 
alasannya karena Terlalu umum,dan Tidak menjelaskan jenis informasi di dalamnya lebih baik `daftarNamaSiswa` atau `profilPengguna`
* **`temp`** 
alasannya karena Singkatan dari *temporary*,dan Tidak jelas fungsinya untuk apa lebih baik `nilaiSebelumnya` atau `hasilSementara`
* **`flag`**
alasannya karena variabel boolean yang tidak menjelaskan kondisi yang ditandai lebih baik `apakahSudahLogin` atau `isKoneksiAktif`
* **`arrayAngka`** 
alasannya karena Mengikutsertakan tipe data ke dalam nama variabel lebih baik `daftarNilaiUjian` atau `kumpulanGaji`