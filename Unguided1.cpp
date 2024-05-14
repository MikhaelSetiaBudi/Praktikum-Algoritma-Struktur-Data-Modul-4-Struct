#include <iostream>
using namespace std;

const int array_buku = 5; 

struct buku
{
    string judul_buku[array_buku];
    string pengarang[array_buku];
    string penerbit[array_buku];
    int tebal_buku[array_buku];
    double harga_buku[array_buku];
};

int main()
{
    buku data_buku;

    cout << "Masukkan data buku: " << endl;
    for (int i = 0; i < array_buku; ++i)
    {
        cout << "Buku ke-" << i + 1 << ":" << endl;
        cout << "Judul Buku: ";
        getline(cin, data_buku.judul_buku[i]);
        cout << "Pengarang Buku: ";
        getline(cin, data_buku.pengarang[i]);
        cout << "Penerbit Buku: ";
        getline(cin, data_buku.penerbit[i]);
        cout << "Tebal Buku: ";
        cin >> data_buku.tebal_buku[i];
        cout << "Harga Buku: ";
        cin >> data_buku.harga_buku[i];
        cin.ignore(); 
    }

    cout << "\nInformasi Buku: " << endl;
    for (int i = 0; i < array_buku; ++i)
    {
        cout << "\nBuku ke-" << i + 1 << ":" << endl;
        cout << "Judul Buku: " << data_buku.judul_buku[i] << endl;
        cout << "Pengarang Buku: " << data_buku.pengarang[i] << endl;
        cout << "Penerbit Buku: " << data_buku.penerbit[i] << endl;
        cout << "Tebal Buku: " << data_buku.tebal_buku[i] << endl;
        cout << "Harga Buku: " << data_buku.harga_buku[i] << endl;
    }

    return 0;
}


// Mikhael Setia Budi
// 2311110033
// copyright@MikhaelS.B