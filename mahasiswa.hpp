//
//  mahasiswa.hpp
//  final_exam
//
//  Created by Sony Wibisono on 14/03/21.
//

#ifndef mahasiswa_hpp
#define mahasiswa_hpp

#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct maha_siswa {
    int id;
    string nim;
    string nama;
};
void open_mahasiswa();
vector<maha_siswa> select_siswa();
void insert_siswa(int id, string nim, string nama);
void update_siswa(string nim, string nama);
void delete_siswa(string nim);
maha_siswa search_siswa(string nim);
void select_siswa_all();
void buat_siswa();
void ubah_siswa();
void hapus_siswa();
void cari_siswa();
#endif /* mahasiswa_hpp */
