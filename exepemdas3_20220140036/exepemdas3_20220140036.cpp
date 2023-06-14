#include <iostream>
#include <vector>
#include "semua data.h"
using namespace std;

int main(){
    Penerbit penerbit1("Gama Press");
    Penerbit penerbit2("Intan Pariwara");

    Pengarang pengarang1("Joko");
    Pengarang pengarang2("Lia");
    Pengarang pengarang3("Giga");
    Pengarang pengarang4("Asroni");

    pengarang1.penerbittambahan(&penerbit1);
    pengarang1.penerbittambahan(&penerbit2);
    pengarang2.penerbittambahan(&penerbit1);
    pengarang3.penerbittambahan(&penerbit2);
    pengarang4.penerbittambahan(&penerbit2);

    cout << "\nDaftar pengarang pada penerbit \"" << penerbit1.ambilNamaPenerbit() << "\": \n" << pengarang1.ambilNamaPengarang() << endl;
    cout << pengarang2.ambilNamaPengarang() << endl;
    cout << pengarang3.ambilNamaPengarang() << endl;

    cout << "\nDaftar pengarang pada penerbit \"" << penerbit2.ambilNamaPenerbit() << "\": \n" << pengarang4.ambilNamaPengarang() << endl;
    cout << pengarang3.ambilNamaPengarang() << endl;

    Buku buku1("Fisika", &pengarang1);
    Buku buku2("Algoritma", &pengarang1);
    Buku buku3("Basisdata", &pengarang2);
    Buku buku4("Dasar Pemrograman", &pengarang4);
    Buku buku5("Matematika", &pengarang3);
    Buku buku6("Multimedia 1", &pengarang3);

    

    cout << "\nDaftar penerbit yang diikuti \"" << pengarang3.ambilNamaPengarang() << "\" : " << endl;
    cout << penerbit1.ambilNamaPenerbit() << endl;
    cout << penerbit2.ambilNamaPenerbit() << endl;

    buku1.penampilinfobuku();
    buku2.penampilinfobuku();
    buku3.penampilinfobuku();
    buku4.penampilinfobuku();
    buku5.penampilinfobuku();
    buku6.penampilinfobuku();

    return 0;
}






