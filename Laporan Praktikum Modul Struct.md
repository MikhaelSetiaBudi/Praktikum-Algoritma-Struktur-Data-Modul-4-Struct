# <h1 align="center">Laporan Praktikum Modul Struct dan Implementasi</h1>
<p align="center">Mikhael Setia Budi</p>

## Dasar Teori

### Variabel
Analogi dari variabel seperti sebuah tempat untuk menampung atau menyimpan suatu data dengan tipe data tertentu. Format penulisan/deklarasi variabel adalah tipe_data nama_variabel. Secara default sebuah variabel hanya dapat menampung 
sebuah nilai, tidak bisa diisi lebih dari satu.  Jika diinginkan dapat menampung lebih dari satu nilai maka deklarasikan variabel sebagai array, dengan format 
penulisan tipe_data nama_variabel [banyak data]. Variabel terbagi menjadi 2 jenis yakni variabel lokal dan global. Perbedaan variabel lokal dan global

Variabel lokal
- Dibuat/dideklarasikan dalam fungsi/prosedur
- Dikenali/dapat dipanggil hanya oleh fungsi atau prosedur yang mendeklarasikannya

Variabel global
- Dibuat/dideklarasikan diluar fungsi atau prosedur
- Dikenali atau dipanggil oleh semua fungsi yang ada didalam program

### Struktur (Struct)
Merupakan tipe data bentukan yang terdiri dari beberapa tipe data standar 
maupun tipe data bentukan lainnya yang telah didefinisikan sebelumnya. 
Sebagaimana telah disinggung sebelumnya, keyword yang digunakan untuk 
membuat/mendeklarasikan sebuah struktur yakni struct. format penulisan diantaranya :

```C++
struct { 
string namaDepan; 
string namaBelakang;
int usia;
char jenis_kelamin;
}namaVariabelStrukA, namaVariabelStrukB
```

```C++
struct namaTipe{
string namaDepan;
string namaTengah;
string namaBelakang;
}; struct namaTipe namaVariabelStrukA, namaVariabelStrukB
```

```C++
typedef struct {
string namaDepan;
string namaTengah;
string namaBelakang;
}namaTipe;
namaTipe namaVariabelStrukA, namaVariabelStrukB;
```

## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
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
```

**Code 1**
```C++
#include <iostream>
using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. 
using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
struct buku
{
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_buku;
    double harga_buku;
}; buku buku1, buku2;
```
kode diatas digunakan untuk mendefinisikan struktur buku yang memiliki lima anggota yaitu judul_buku, pengarang, penerbit, tebal_buku, dan harga_buku. struktur ini digunakan untuk erepresentasikan informasi tentang buku. lalu mendeklarasikan dua variabel dari tipe buku yakni buku1 dan buku2.

**Code 3**
```C++
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
```
int main() merupakan fungsi utama program. data diisi untuk kedua objek yaitu buku1 dan buku2 dengan menggunakan operator titik untuk mengakses dan mengatur nilai masing-masing atribut.

**Code 4**
```C++
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
```
kode diatas digunakan untuk menampilkan informasi mengenai buku1 dan buku2 menggunakan cout. atribut buku diakses dengan menggunakan operator titik setelah nama objeknya.

**Code 5**
```C++
return 0;

}
```
Return 0 digunakan untuk mengembalikan nilai 0 yang menandakan bahwa program telah selesai.

#### Output
```C++
Informasi Buku : 
Judul Buku : Algoritma Pemrograman
Pengarang Buku : Yunus Prademon
Penerbit Buku : Gramedia Pustaka Utama
Tebal Buku : 300
Harga Buku : 120000
Informasi Buku :
Judul Buku : Metode Statistika
Pengarang Buku : Atika Ratna Dewi
Penerbit Buku : Gramedia Pustaka Utama
Tebal Buku : 250
Harga Buku : 110000
```
output diatas menampilkan Informasi buku1 dan buku2 yang berisikan judul buku, pengarang buku, penerbit buku, tebal buku, dan harga buku

#### Full Code Screenshoot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-5-Struct/blob/master/Modul%205%20Alstrukdat/code%20Guided%201%20Struct.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-5-Struct/blob/master/Output%20Modul%205%20Alstrukdat/Output%20Guided%201%20Struct.png?raw=true)

### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.

Hewan
Nama_hewan
Jenis_kelamin
Cara berkembangbiak
Alat pernafasan
Tempat hidup
Apakah Karnivora ?

Hewan Darat
Jumlah Kaki
Apakah menyusui ?
Suara

Hewan Laut
Bentuk sirip
Bentuk pertahanan diri

```C++
#include <iostream>
#include <string>
using namespace std;

struct hewan {
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernafasan;
    string tempat_hidup;
    bool karnivora;
}; 

struct hewan_darat{
    hewan info_hewan;
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
};
hewan_darat hewan1;

struct hewan_laut{
    hewan info_hewan;
    string bentuk_sirip;
    string pertahanan_diri;
};
hewan_laut hewan2;

int main() {
    hewan1.info_hewan.nama_hewan = "Anjing";
    hewan1.info_hewan.jenis_kelamin = "Laki-laki";
    hewan1.info_hewan.kembangbiak = "Melahirkan";
    hewan1.info_hewan.pernafasan = "Paru paru";
    hewan1.info_hewan.tempat_hidup = "Darat";
    hewan1.info_hewan.karnivora = true;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;   
    hewan1.suara = "guk, guk, guk";
    
    hewan2.info_hewan.nama_hewan = "Hiu";
    hewan2.info_hewan.jenis_kelamin = "Perempuan";
    hewan2.info_hewan.kembangbiak = "Bertelur dan Beranak";
    hewan2.info_hewan.pernafasan = "Insang";
    hewan2.info_hewan.tempat_hidup = "Perairan (Laut)";
    hewan2.info_hewan.karnivora = true;
    hewan2.bentuk_sirip = "dosal, sabit, dan gumpalan";
    hewan2.pertahanan_diri = "Memakan Mangsa";   

	//menampilkan data 
	cout << "\t Hewan Darat" << endl;
	cout << "Nama Hewan :" <<hewan1.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan1.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan1.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan1.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan1.info_hewan.tempat_hidup << endl;
	cout << "karnivora : "<< hewan1.info_hewan.karnivora << endl;
	cout << "jumlah kaki : "<< hewan1.jumlah_kaki << endl;
	cout << "apakah menyusui?  : "<< hewan1.apakah_menyusui << endl;
	cout << "suara : "<< hewan1.suara << "\n" << endl ;

	//menampilkan data 
	cout << "\t Hewan Laut" << endl;
	cout << "Nama Hewan :" <<hewan2.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan2.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan2.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan2.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan2.info_hewan.tempat_hidup << endl;
	cout << "apakah karnivora? "<< hewan2.info_hewan.karnivora << endl;
	cout << "bentuk sirip : "<< hewan2.bentuk_sirip << endl;
	cout << "pertahanan diri : "<< hewan2.pertahanan_diri << endl;

	return 0;
	}
```

**Code 1**
```C++
#include <iostream>
#include <string>
using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. string digunakan untuk tipe data string. 
using namespace std digunakan untuk menggunakan namespace std.

**Code 2**
```C++
struct hewan {
    string nama_hewan;
    string jenis_kelamin;
    string kembangbiak;
    string pernafasan;
    string tempat_hidup;
    bool karnivora;
}; 
```
kode diatas digunakan untuk mendefinisikan struct hewan yang memiliki beberapa atribut seperti nama_hewan, jenis_kelamin, kembangbiak, pernafasan, tempat_hidup, dan karnivora. struct ini merepresentasikan informasi umum tentang hewan.

**Code 3**
```C++
struct hewan_darat{
    hewan info_hewan;
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
};
hewan_darat hewan1;
```
struct hewan darat didefinisikan yang menempatkan struct hewan sebagai salah satu anggotanya. dimana dalam struct hewan darat terdapat beberapa atribut yaitu jumlah_kaki, apakah_menyusui,dan suara. lalu mendeklarasikan hewan1 dengan tipe hewan_darat.

**Code 4**
```C++
struct hewan_laut{
    hewan info_hewan;
    string bentuk_sirip;
    string pertahanan_diri;
};
hewan_laut hewan2;
```
struct hewan laut didefinisikan yang menempatkan struct hewan sebagai salah satu anggotanya. dimana dalam struct hewan laut terdapat beberapa atribut yaitu bentuk_sirip dan pertahanan_diri. lalu mendeklarasikan hewan2 dengan tipe hewan_laut.

**Code 5**
```C++
int main() {
    hewan1.info_hewan.nama_hewan = "Anjing";
    hewan1.info_hewan.jenis_kelamin = "Laki-laki";
    hewan1.info_hewan.kembangbiak = "Melahirkan";
    hewan1.info_hewan.pernafasan = "Paru paru";
    hewan1.info_hewan.tempat_hidup = "Darat";
    hewan1.info_hewan.karnivora = true;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;   
    hewan1.suara = "guk, guk, guk";
    
    hewan2.info_hewan.nama_hewan = "Hiu";
    hewan2.info_hewan.jenis_kelamin = "Perempuan";
    hewan2.info_hewan.kembangbiak = "Bertelur dan Beranak";
    hewan2.info_hewan.pernafasan = "Insang";
    hewan2.info_hewan.tempat_hidup = "Perairan (Laut)";
    hewan2.info_hewan.karnivora = true;
    hewan2.bentuk_sirip = "dosal, sabit, dan gumpalan";
    hewan2.pertahanan_diri = "Memakan Mangsa";   
```
int main() merupakan fungsi utama program. hewan1 dan hewan2 diisi dengan data sesuai atribut pada setia struct hewan dan hewan darat pada hewan1, lalu atribut hewan dan hewan laut pada hewan2 dengan menggunakan operator titik untuk mengakses dan mengatur nilai masing-masing atribut.

**Code 6**
```C++
//menampilkan data 
	cout << "\t Hewan Darat" << endl;
	cout << "Nama Hewan :" <<hewan1.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan1.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan1.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan1.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan1.info_hewan.tempat_hidup << endl;
	cout << "karnivora : "<< hewan1.info_hewan.karnivora << endl;
	cout << "jumlah kaki : "<< hewan1.jumlah_kaki << endl;
	cout << "apakah menyusui?  : "<< hewan1.apakah_menyusui << endl;
	cout << "suara : "<< hewan1.suara << "\n" << endl ;

	//menampilkan data 
	cout << "\t Hewan Laut" << endl;
	cout << "Nama Hewan :" <<hewan2.info_hewan.nama_hewan << endl;
	cout << "Jenis Kelamin : "<<hewan2.info_hewan.jenis_kelamin << endl;
	cout << "Kembangbiak : "<< hewan2.info_hewan.kembangbiak << endl;
	cout << "Pernapasan : "<< hewan2.info_hewan.pernafasan << endl;
	cout << "Tempat Hidup : "<< hewan2.info_hewan.tempat_hidup << endl;
	cout << "apakah karnivora? "<< hewan2.info_hewan.karnivora << endl;
	cout << "bentuk sirip : "<< hewan2.bentuk_sirip << endl;
	cout << "pertahanan diri : "<< hewan2.pertahanan_diri << endl;
```
kode diatas digunakan untuk menampilkan informasi mengenai hewan1 dan hewan2 dengan menggunakan cout. atribut hewan diakses dengan menggunakan operator titik setelah nama objek.

**Code 7**
```C++
	return 0;
  }
```
Mengembalikan nilai 0 yang menandakan bahwa program telah selesai dijalankan.

#### Output
```C++
         Hewan Darat
Nama Hewan :Anjing
Jenis Kelamin : Laki-laki
Kembangbiak : Melahirkan
Pernapasan : Paru paru
Tempat Hidup : Darat
karnivora : 1
jumlah kaki : 4
apakah menyusui?  : 1
suara : guk, guk, guk

         Hewan Laut
Nama Hewan :Hiu
Jenis Kelamin : Perempuan
Kembangbiak : Bertelur dan Beranak
Pernapasan : Insang
Tempat Hidup : Perairan (Laut)
apakah karnivora? 1
bentuk sirip : dosal, sabit, dan gumpalan
pertahanan diri : Memakan Mangsa
```
Menampilkan informasi hewan darat yaitu nama hewan, jenis kelamin, kembangbiak, pernapasan, tempat hidup, karivora, jumlah kaki, apakah menyusui?, dan suara. pada bagian karnivora dan apakah menyusui 1 yang artinya true. menampilkan informasi hewan laut yaitu nama hewan, jenis kelamin, kembangbiak, pernapasan, tempat hidup, apakah karnivora?, bentuk sirip, dan pertahanan diri. pada bagian apakah karnivora? 1 yang artinya true.

#### Full Code Screenshoot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-5-Struct/blob/master/Modul%205%20Alstrukdat/code%20Guided%202%20Struct.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-5-Struct/blob/master/Output%20Modul%205%20Alstrukdat/Output%20Guided%202%20Struct.png?raw=true)

## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan. 

```C++
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
```

**Code 1**
```C++
#include <iostream>
using namespace std;
```
kode diatas digunakan untuk mendefinisikan header file iostream yang berisi definisi objek input dan output standar seperti cin, dan cout. 
using namespace std digunakan untuk menggunakan namespace std. 

**Code 2**
```C++
const int array_buku = 5; 
```
kode diatas digunakan untuk mendeklarasikan sebuah konstanta array_buku yang memiliki nilai 5. konstanta ini digunakan untuk menentukan jumlah buku yang akan dimasukkan.

**Code 3**
```C++
struct buku
{
    string judul_buku[array_buku];
    string pengarang[array_buku];
    string penerbit[array_buku];
    int tebal_buku[array_buku];
    double harga_buku[array_buku];
};
```
kode diatas digunakan untuk mendefinisikan struct buku yang memiliki beberapa array untuk menyimpan informasi tentang judul buku, pengarang, penerbit, tebal buku, dan harga buku.

**Code 4**
```C++
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
  ```
int main() merupakan fungsi program utama. variabel data_buku dari tipe buku dideklarasikan untuk menyimpan data buku yang dimasukkan oleh pengguna. perulagan for yang memungkinkan pengguna untuk memasukkan informasi tentang setiap buku. setiap atribut buku yang dimasukkan ke dalam array yang sesuai. 

**Code 5**
```C++
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
```
kode diatas digunakan untuk menampilkan informasi buku yang dimasukkan oleh pengguna.

**Code 6**
```C++
    return 0;
}
```
Mengembalikan nilai 0 yang menandakan bahwa program telah selesai dijalankan.

#### Output:
```C++
Masukkan data buku: 
Buku ke-1:
Judul Buku: Algoritma Pemrograman
Pengarang Buku: Yunus Prademon
Penerbit Buku: Gramedia Pustaka Utama
Tebal Buku: 300
Harga Buku: 120000
Buku ke-2:
Judul Buku: Metode Statistika
Pengarang Buku: Atika Ratna Dewi
Penerbit Buku: Gramedia Pustaka Utama
Tebal Buku: 250
Harga Buku: 110000
Buku ke-3:
Judul Buku: Kewarganegaraan
Pengarang Buku: Rakhma Nurrozalina
Penerbit Buku: Gramedia Pustaka Utama
Tebal Buku: 350
Harga Buku: 150000
Buku ke-4:
Judul Buku: Matematika Diskrit
Pengarang Buku: Ummi Athiya
Penerbit Buku: Gramedia Pustaka Utama
Tebal Buku: 200
Harga Buku: 130000
Buku ke-5:
Judul Buku: 1001 Modus
Pengarang Buku: Rizal Wahyu Pratama
Penerbit Buku: Gramedia Pustaka Utama
Tebal Buku: 200
Harga Buku: 100000
```
Pengguna memasukkan data buku 1 sampai 5.

```C++
Informasi Buku:

Buku ke-1:
Judul Buku: Algoritma Pemrograman       
Pengarang Buku: Yunus Prademon
Penerbit Buku: Gramedia Pustaka Utama   
Tebal Buku: 300
Harga Buku: 120000

Buku ke-2:
Judul Buku: Metode Statistika
Pengarang Buku: Atika Ratna Dewi        
Penerbit Buku: Gramedia Pustaka Utama   
Tebal Buku: 250
Harga Buku: 110000

Buku ke-3:
Judul Buku: Kewarganegaraan
Pengarang Buku: Rakhma Nurrozalina      
Penerbit Buku: Gramedia Pustaka Utama   
Tebal Buku: 350
Harga Buku: 150000

Buku ke-4:
Judul Buku: Matematika Diskrit
Pengarang Buku: Ummi Athiya
Penerbit Buku: Gramedia Pustaka Utama   
Tebal Buku: 200
Harga Buku: 130000

Buku ke-5:
Judul Buku: 1001 Modus
Pengarang Buku: Rizal Wahyu Pratama
Penerbit Buku: Gramedia Pustaka Utama
Tebal Buku: 200
Harga Buku: 100000
```
menampilkan Infromasi buku 1 sampai 5 yang telah diinputkan oleh pengguna.

#### Full code Screenshot:
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-5-Struct/blob/master/Modul%205%20Alstrukdat/code%20Unguided%201%20Struct.png?raw=true)

#### Output Screenshot
![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-5-Struct/blob/master/Output%20Modul%205%20Alstrukdat/Output%20Unguided%201%20Struct%20(Input%20Data).png?raw=true)

![alt text](https://github.com/MikhaelSetiaBudi/Praktikum-Algoritma-Struktur-Data-Modul-5-Struct/blob/master/Output%20Modul%205%20Alstrukdat/Output%20Unguided%201%20Struct.png?raw=true)

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?


## Kesimpulan
searching merupakan sebuah proses pencarian suatu data di dalam sebuah array dengan cara mengecek satu persatu pada setiap index baris atau setiap index kolom dengan menggunakan teknik perulangan untuk melakukan pencarian data. searching memiliki 2 metode yaitu sequential search yang membaca data dalam array satu demi satu, dan binary search dimana data harus diurutkan terlebih dahulu dengan cara data dibagi menjadi dua.

## Referensi
[1]	W. S. Wahyuni, S. Andryana, and B. Rahman, “Penggunaan Algoritma Sequential Searching Pada Aplikasi Perpustakaan Berbasis Web,” JIPI (Jurnal Ilm. Penelit. dan Pembelajaran Inform., vol. 7, no. 2, pp. 294–302, 2022, doi: 10.29100/jipi.v7i2.2646.
