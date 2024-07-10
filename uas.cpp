#include <iostream>
#include <string>
using namespace std;

struct Kartu {
    string nama;
    string deskripsi;
    int attack;
    int defend;
};

int main() {
    Kartu kartu1;
    kartu1.nama = "Obelisk the tormentor";
    kartu1.deskripsi = "naga";
    kartu1.attack = 3000;
    kartu1.defend = 2500;

    cout << "Nama: " << kartu1.nama << endl;
    cout << "Deskripsi: " << kartu1.deskripsi << endl;
    cout << "Attack: " << kartu1.attack << endl;
    cout << "Defend: " << kartu1.defend << endl;

    return 0;
}
