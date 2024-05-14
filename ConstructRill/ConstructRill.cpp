#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;
public:
    Mahasiswa();
    Mahasiswa(int iNim) {
        nim = iNim;
    };
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak();
};

Mahasiswa::Mahasiswa() {
    nim = 0;
    nama = " ";
}

//Mahasiswa::Mahasiswa(int iNim) {
//    nim = iNim;
//}

Mahasiswa::Mahasiswa(string iNama) {
    nim = 0;
    nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
}

void Mahasiswa::cetak() {
    cout << endl << "Nim = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main()
{
    Mahasiswa mhs1;
    Mahasiswa mhs2(20);
    Mahasiswa mhs3("Apin");
    Mahasiswa mhs4(20, "Pina");

    
}
