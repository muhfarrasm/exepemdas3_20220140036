#pragma
#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
using namespace std;

class Penerbit {
public:
	string namapen;
	Penerbit(string Pnama) : namapen(Pnama) {}
	string ambilNamaPenerbit() {
		return namapen;
	}

};

class Pengarang {
public:
	string namaP;
	vector<Penerbit*> Daftar_penerbit_yang_diikuti;
	Pengarang(string namapengarang) : namaP(namapengarang) {}
	void penerbittambahan(Penerbit* penerbit) 
	{
		Daftar_penerbit_yang_diikuti.push_back(penerbit);
	}

	void penampilPenerbitDiikuti() {
		cout << "Daftar penerbit yang diikuti \"" << namaP << "\": ";
		for (Penerbit* penerbit : Daftar_penerbit_yang_diikuti) {
			cout << penerbit->ambilNamaPenerbit() << " ";
		}
		cout << endl;
	}
	string ambilNamaPengarang() {
		return namaP;
	}


};

class Buku {
public:
	string Judulbuku;
	Pengarang* peng;
	Buku(string judulbook, Pengarang* pengarang) : Judulbuku(judulbook), peng(pengarang) {}
	void penampilinfobuku() {
		cout << "\nDaftar buku yang dikarang \"" << peng->ambilNamaPengarang() << "\": " << Judulbuku << endl;
	}



};

#endif