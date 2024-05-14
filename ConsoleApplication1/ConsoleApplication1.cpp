#include <iostream>
#include <string>

class Mahasiswa {
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();
};

int main()
{
    std::cout << "Hello World!\n";
}
