#include <iostream>
using namespace std;

struct buku
{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_buku;
    double harga_buku;
}; buku buku1, buku2;

int main()
{
    buku1.judul_buku = "Algoritma Pemrograman";
    buku1.pengarang = "Yunus Prademon";
    buku1.penerbit = "Gramedia Pustaka Utama";
    buku1.tebal_buku = 300;
    buku1.harga_buku = 120000;

    buku2.judul_buku = "Metode Statistika";
    buku2.pengarang = "Atika Ratna Dewi";
    buku2.penerbit = "Gramedia Pustaka Utama";
    buku2.tebal_buku = 250;
    buku2.harga_buku = 110000;

cout << "Informasi Buku : " << endl;
cout << "Judul Buku : " << buku1.judul_buku << endl;
cout << "Pengarang Buku : " << buku1.pengarang << endl;
cout << "Penerbit Buku : " << buku1.penerbit << endl;
cout << "Tebal Buku : " << buku1.tebal_buku << endl;
cout << "Harga Buku : " << buku1.harga_buku << endl;
cout << "Informasi Buku : " << endl;
cout << "Judul Buku : " << buku2.judul_buku << endl;
cout << "Pengarang Buku : " << buku2.pengarang << endl;
cout << "Penerbit Buku : " << buku2.penerbit << endl;
cout << "Tebal Buku : " << buku2.tebal_buku << endl;
cout << "Harga Buku : " << buku2.harga_buku << endl;

return 0;

}
