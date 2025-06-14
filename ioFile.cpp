#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    //Membuka file dalam mode menulis
    ofstream outfile;
    //Menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");
    //Unlimited loop untuk menulis 
    while(true){
        cout << "- ";
        //Mendapatkan setiap karakter dalam satu barus
        getline(cin, baris);
        //Loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        //Menulis dan memasukkan nilai dari "Baris" ke dalam file
        outfile << baris << endl;
    }
    //Selesai dalam menulis sekarang tutup filenya
    outfile.close();
    //Membuka file dalam mode membaca
    ifstream infile;
    //Menunjuk ke sebuah file
    infile.open("contohfile.txt");
    cout << endl << ">= Membuka dan Membaca File " << endl;
    //Jika file ada maka
    if (infile.is_open()){
        //Melakukan perulangan setiap baris
        while(getline(infile, baris)){
            //Dan tampilkan di sini
            cout << baris << '\n';
        }
    //tutup file tersebut setelah selesai
    infile.close();
    }
    //Jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}