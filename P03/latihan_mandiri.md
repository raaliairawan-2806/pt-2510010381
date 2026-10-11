
# 1. Mengubah detik menjadi jam, menit, detik


```

#include <iostream>
using namespace std;

int main() {
    int total_detik;
    int jam, menit, detik;

    cout << "Masukkan jumlah detik: ";
    cin >> total_detik;

    jam = total_detik / 3600;
    menit = (total_detik % 3600) / 60;
    detik = total_detik % 60;

    cout << "Jam   : " << jam << endl;
    cout << "Menit : " << menit << endl;
    cout << "Detik : " << detik << endl;

    return 0;
}

```

# 2. Hasil bagi dan sisa

```

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;

    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    if (b == 0) {
        cout << "Bilangan kedua tidak boleh 0." << endl;
    } else {
        cout << "Hasil bagi : " << a / b << endl;
        cout << "Sisa bagi  : " << a % b << endl;
    }

    return 0;
}

```

# 3. Menambahkan selisih pada SiNilai v0.2
```
// SiNilai v0.2: menghitung nilai akhir satu mahasiswa.
// Dibangun di atas v0.1: bagian membaca data sudah jadi, tinggal menghitung dan menampilkan.
// Formula: nilai akhir = kehadiran x 10% + mingguan x 45% + UTS x 25% + UAS x 20%.
#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // TODO 1: deklarasikan empat konstanta bobot dari konstanta.cpp Pertemuan 2
    //         (BOBOT_KEHADIRAN, BOBOT_MINGGUAN, BOBOT_UTS, BOBOT_UAS).
    const double BOBOT_KEHADIRAN = 0.10;
    const double BOBOT_MINGGUAN = 0.45;
    const double BOBOT_UTS = 0.25;
    const double BOBOT_UAS = 0.20;

    string nama;
    string npm;
    double kehadiran = 0;
    double mingguan = 0;
    double uts = 0;
    double uas = 0;

    cout << "=== SiNilai v0.2 ===\n";
    cout << "Nama      : ";
    getline(cin, nama);
    cout << "NPM       : ";
    cin >> npm;
    cout << "Kehadiran : ";
    cin >> kehadiran;
    cout << "Mingguan  : ";
    cin >> mingguan;
    cout << "UTS       : ";
    cin >> uts;
    cout << "UAS       : ";
    cin >> uas;

    // TODO 2: hitung nilai akhir dengan formula di atas. Simpan ke variabel double nilai_akhir.
    double nilai_akhir =
        kehadiran * BOBOT_KEHADIRAN +
        mingguan * BOBOT_MINGGUAN +
        uts * BOBOT_UTS +
        uas * BOBOT_UAS;
    // TODO 3: hitung juga rata-rata sederhana keempat komponen (tanpa bobot), simpan ke rerata_polos.
    //         Hati-hati: pembaginya jangan bilangan bulat.
     double rerata_polos =
        (kehadiran + mingguan + uts + uas) / 4.0;

    double selisih = nilai_akhir - rerata_polos;

    cout << "\n--- Kartu Nilai Mahasiswa ---\n";
    cout << "Nama        : " << nama << "\n";
    cout << "NPM         : " << npm << "\n";
    // TODO 4: tampilkan nilai akhir dan rata-rata sederhana keempat komponen.
    cout << "Nilai Akhir : " << nilai_akhir << "\n";
    cout << "Rata-rata   : " << rerata_polos << "\n";
    cout << "Selisih     : " << selisih << "\n";

    return 0;
}

```
# 4. Latihan Mandiri nomor 4 — Membandingkan C++ dan Python

```
print("2 + 3 * 4 =", 2 + 3 * 4)
print("2 * 3 / 4 =", 2 * 3 / 4)
print("2 / 4 * 3 =", 2 / 4 * 3)
```

Hasil ketika dijalankan di Python:

```
2 + 3 * 4 = 14
2 * 3 / 4 = 1.5
2 / 4 * 3 = 1.5
```

bandingkan hasil c++ dan python

| Ekspresi    | Hasil C++ | Hasil Python | perbedaan |
| ----------- | --------- | ------------ | --------  |
| `2 + 3 * 4` | 14        | 14           | Tidak ada |
| `2 * 3 / 4` | 1         | 1.5          | ada       |
| `2 / 4 * 3` | 0         | 1.5          | ada       |


Alasannya:

1\. `2 + 3 * 4`

Alasan: Hasilnya sama karena perkalian dikerjakan terlebih dahulu daripada penjumlahan.

2\. `2 * 3 / 4`

Alasan: Hasilnya berbeda karena di C++, 2 dikali 3 menghasilkan 6 lalu dibagi 4 hasilnya 1 karena pembagian bilangan bulat membuang pecahannya. Sedangkan di Python, hasilnya 1,5 karena pembagian menggunakan `/` bisa menghasilkan angka desimal.

3\. `2 / 4 * 3`

Alasan: Hasilnya berbeda karena perhitungan dilakukan dari kiri ke kanan Di C++, 2 dibagi 4 hasilnya 0 karena pecahannya dibuang lalu dikali 3 tetap 0. Sedangkan di Python 2 dibagi 4 hasilnya 0,5 lalu dikali 3 menjadi 1,5.
