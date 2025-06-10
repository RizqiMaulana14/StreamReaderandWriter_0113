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
}