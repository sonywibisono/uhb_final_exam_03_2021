//
//  nilai.cpp
//  final_exam
//
//  Created by Sony Wibisono on 14/03/21.
//
#include <iostream>
#include <fstream>
#include "nilai.hpp"
using namespace std;
ofstream nfile;
void open_nilai(){
    nfile.open("nilai.txt", std::ios_base::app);
}

void insert_nilai(string nim,string kode,float angka,string huruf){
    open_nilai();
    nfile << nim << ","<< kode << "," << angka << "," << huruf << endl;
    nfile.close();
}
void update_nilai(){
    
}
void delete_nilai(){
    
}
vector<nilai> select_nilai(){
    string line;
    nilai nl;
    std::vector<nilai> result;
    ifstream myfile ("nilai.txt");
    
    return result;
}
void select_all_siswa(){
    cout << "Daftar Nilai" << endl;
    cout << std::string(30,'=') << endl;
}
void buat_siswa(){
    cout << "Entri Nilai Baru :" << endl;
    cout << std::string(30,'=') << endl;
}
void ubah_siswa(){
    cout << "Ubah Nilai Siswa :" << endl;
    cout << std::string(30,'=') << endl;
}
void hapus_siswa(){
    cout << "Hapus Nilai :" << endl;
    cout << std::string(30,'=') << endl;
}
void cari_siswa(){
    cout << "Cari Nilai :" << endl;
    cout << std::string(30,'=') << endl;
}
