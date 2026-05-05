#include <iostream>
using namespace std;

class Mahasiswa {//membuat kelas mahasiswa
    public:
    int id;
    string nama;

    void setID();
    void printAll();

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};