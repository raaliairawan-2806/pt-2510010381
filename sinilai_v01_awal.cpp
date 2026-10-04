#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    string npm;
    int kehadiran;
    int mingguan;
    int uts;
    int uas;
    
    cout << "=== SiNilai v0.1 ===\n";
    cout << "Nama      : ";
    getline(cin, nama);
    cout << "NPM       : ";
    getline(cin, npm);
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
    cout << "Kehadiran : " << kehadiran << endl;
    cout << "Mingguan  : " << mingguan << endl;
    cout << "UTS       : " << uts << endl;
    cout << "UAS       : " << uas << endl;

    return 0;
}
