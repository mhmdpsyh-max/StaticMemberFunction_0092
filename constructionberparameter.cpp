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
    