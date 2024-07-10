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
    kartu1.attack = 4000;
    kartu1.defend = 2000;

    cout << "Nama: " << kartu1.nama << endl;
    cout << "Deskripsi: " << kartu1.deskripsi << endl;
    cout << "Attack: " << kartu1.attack << endl;
    cout << "Defend: " << kartu1.defend << endl;

    Kartu kartu2;
    kartu2.nama = "sky dragon";
    kartu2.deskripsi = "naga";
    kartu2.attack = 9000;
    kartu2.defend = 8000;

    cout << "Nama: " << kartu2.nama << endl;
    cout << "Deskripsi: " << kartu2.deskripsi << endl;
    cout << "Attack: " << kartu2.attack << endl;
    cout << "Defend: " << kartu2.defend << endl;


    return 0;
}
