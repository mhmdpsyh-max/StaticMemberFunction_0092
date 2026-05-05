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
    produk p1(122, "Lemari");
    produk p2("TV");
    produk p3(202);
    produk p4(303, "Papan");
    
    
    cout << "Produk 1:" << endl;
    p1.tampilkan();
    cout << endl;

    cout << "Produk 2:" << endl;
    p2.tampilkan();
    cout << endl;

    cout << "Produk 3:" << endl;
    p3.tampilkan();
    cout << endl;

    cout << "Produk 4:" << endl;
    p4.tampilkan();
    cout << endl;

    return 0;
}