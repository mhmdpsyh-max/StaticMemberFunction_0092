#include <iostream>
using namespace std;

class produk{
    private:
        int id_produk;
        string nama_produk;

    public:
        produk(){}

        produk(int iid){
            id_produk = iid;
        }

        produk(string inama){
            nama_produk = inama;
        }

        produk(int iid, string inama){
            id_produk = iid;
            nama_produk = inama;
        }

        void tampilkan(){
            cout << "ID Produk: " << id_produk << endl;
            cout << "Nama Produk: " << nama_produk << endl;
        }
};

int main(){
     produk p1(100, "Lemari");
     
}