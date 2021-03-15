//
//  mata_kuliah.cpp
//  final_exam
//
//  Created by Sony Wibisono on 14/03/21.
//
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "mata_kuliah.hpp"
#include "tools.hpp"
using namespace std;
ofstream mkfile;
void open_matakuliah(){
    mkfile.open("matakuliah.txt", ios_base::app);
}
std::vector<mata_kuliah> select_mata_kuliah(){
    string line;
    mata_kuliah mk;
    std::vector<mata_kuliah> result;
    ifstream myfile ("matakuliah.txt");
    if (myfile.is_open())
      {
        while ( getline (myfile,line) )
        {
            vector<string> v = explode(",", line);
//          cout << line << '\n';
            mk.id = stoi(v[0]);
            mk.kode = v[1];
            mk.nama = v[2];
//            cout << "id:" << v[0] << ", kode : " << v[1] << ", nama :" << v[2] << endl;
            result.push_back(mk);
        }
        
      } else cout << "Unable to open file";
    myfile.close();
    return result;
}
void insert_mata_kuliah(int id, string kode, string nama) {
    open_matakuliah();
    mkfile << id << ","<< kode << "," << nama << endl;
    mkfile.close();
}
void update_mata_kuliah(int id, string kode, string nama) {
    ifstream myfile ("matakuliah.txt");
    myfile.close();
}
void delete_mata_kuliah(int id) {
    ifstream myfile ("matakuliah.txt");
    myfile.close();
//    mata_kuliah = select_all();
}
mata_kuliah search_mata_kuliah(string kode) {
    mata_kuliah mk;
    mk.id = 0;
    mk.kode = "";
    mk.nama = "";
    vector<mata_kuliah> makul = select_mata_kuliah();
    bool found = false;
    for(mata_kuliah v:makul){
        if(v.kode==kode){
            mk = v;
            found = true;
        }
    }
    cout << "mk : " << mk.nama << endl;
    return mk;
}
int buat_mata_kuliah() {
    cout << "Buat Mata Kuliah Baru :" << endl;
    cout << std::string(30,'=') << endl;
    int id;
    string kode;
    string nama;
    cout << "Masukkan id : ";
    cin >> id ; cout << endl;
    cout << "Masukkan kode : ";
    cin >> kode ; cout << endl;
    cout << "Masukkan nama : ";
    cin >> nama ; cout << endl;
    insert_mata_kuliah(id,kode,nama);
    cout << "Data Mata Kuliah telah disimpan ..." << endl;
    return 2;
}
int ubah_mata_kuliah(){
    string kode,nama;
    cout << "Ubah Mata Kuliah :" << endl;
    cout << std::string(30,'=') << endl;
    cout << "Kode : ";
    cin >> kode;
    mata_kuliah mk = search_mata_kuliah(kode);
    if(mk.id==0){
        cout << "Tidak ada mata kuliah dengan kode ini!" << endl;
        return 2;
    }
    cout << "Nama Mata kuliah : ";
    cin >> nama;
    
    return 2;
}
int hapus_mata_kuliah(){
    string kode;
    cout << "Hapus Mata Kuliah :" << endl;
    cout << std::string(30,'=') << endl;
    cout << "Kode : ";
    cin >> kode;
    mata_kuliah mk = search_mata_kuliah(kode);
    
    return 2;
}
int cari_mata_kuliah(){
    string kode;
    cout << "Cari Mata Kuliah :" << endl;
    cout << std::string(30,'=') << endl;
    cout << "Kode : ";
    cin >> kode;
    mata_kuliah mk = search_mata_kuliah(kode);
    return 2;
}
int select_mata_kuliah_all() {
    cout << "Daftar Mata Kuliah :" << endl;
    cout << std::string(30,'=') << endl;
    vector<mata_kuliah> mks = select_mata_kuliah();
    cout << "|  ID  | Kode  | Nama" << endl;
    cout << std::string(30,'-') << endl;
    for(mata_kuliah v:mks){
        cout << "| " << std::setw (4) << v.id << " | " << std::setw (5) << v.kode << " | " << v.nama << endl;
    }
    cout << std::string(30,'=') << endl;
    return 2;
    
}

