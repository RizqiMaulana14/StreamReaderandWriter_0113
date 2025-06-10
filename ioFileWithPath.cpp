#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string NamaFile;
    cout << "Masukkan Nama File : ";
    cin >> NamaFile;
    //Membuka file dalam mode menulis.
    ofstream outfile;
    //Menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);
    cout << ">= Menulis File, \'q' untuk keluar" << endl;
}