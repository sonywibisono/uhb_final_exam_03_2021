//
//  mahasiswa.cpp
//  final_exam
//
//  Created by Sony Wibisono on 14/03/21.
//
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "mahasiswa.hpp"
#include "tools.hpp"

using namespace std;
ofstream mhsfile;
void open_mahasiswa(){
    mhsfile.open("mahasiswa.txt", std::ios_base::app);
}
vector<maha_siswa> select_siswa(){
    vector<maha_siswa> result;
    maha_siswa mhs;
    ifstream myfile ("mahasiswa.txt");
    string line;
    if (myfile.is_open())
      {
        while (getline (myfile,line))
        {
            vector<string> v = explode(",", line);
            mhs.id = stoi(v[0]);
            mhs.nim = v[1];
            mhs.nama = v[2];
            result.push_back(mhs);
        }
        
      } else cout << "Unable to open file";
    myfile.close();
    return result;
}
void insert_siswa(int id, string nim, string nama){
    open_mahasiswa();
    mhsfile << id << ","<< nim << "," << nama << endl;
    mhsfile.close();
}
void update_siswa(string nim, string nama){

}
void delete_siswa(string nim){

}
maha_siswa search_siswa(string nim){
    maha_siswa mhs;
    mhs.id = 0;
    mhs.nim = "";
    mhs.nama = "";
    vector<maha_siswa> mahas = select_siswa();
    bool found = false;
    for(maha_siswa v:mahas){
        if(v.nim==nim){
            mhs = v;
            found = true;
        }
    }
    cout << "mhs : " << mhs.nama << endl;
    return mhs;
    return mhs;
}
void select_siswa_all(){
    cout << "Daftar Mahasiswa" << endl;
    cout << std::string(30,'=') << endl;
}
void buat_siswa(){
    cout << "Buat Mahasiswa Baru :" << endl;
    cout << std::string(30,'=') << endl;
}
void ubah_siswa(){
    cout << "Ubah Mahasiswa :" << endl;
    cout << std::string(30,'=') << endl;
}
void hapus_siswa(){
    cout << "Hapus Mahasiswa :" << endl;
    cout << std::string(30,'=') << endl;
}
void cari_siswa(){
    cout << "Cari Mahasiswa :" << endl;
    cout << std::string(30,'=') << endl;
}
