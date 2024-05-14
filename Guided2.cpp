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