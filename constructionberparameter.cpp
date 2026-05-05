#include <iostream>
using namespace std;

class mahasiswa {
public:
    mahasiswa(); // Constructor
    mahasiswa(int nim, string nama); // Constructor dengan parameter
    };

mahasiswa::mahasiswa() {
    cout << "Constructor Terpanggil" << endl; // Definisi Constructor
}

// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
}

int main(){
    mahasiswa mhs; // Pembuatan Object
    mahasiswa mhs2(111, "rizqi tukang makan"); // memanggil constructor dengan parameter
    return 0;
}
