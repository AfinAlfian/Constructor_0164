#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;
public:
    Mahasiswa();
    Mahasiswa(int);
    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak();
};

Mahasiswa::Mahasiswa() {
    nim = 0;
    nama = " ";
}

Mahasiswa::Mahasiswa(int iNim) {
    nim = iNim;
}

Mahasiswa::Mahasiswa(int iNim, string iNama) {
    nim = 0;
    nama = iNama;
}

int main()
{
    std::cout << "Hello World!\n";
}
