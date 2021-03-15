//
//  mata_kuliah.hpp
//  final_exam
//
//  Created by Sony Wibisono on 14/03/21.
//

#ifndef mata_kuliah_hpp
#define mata_kuliah_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include <fstream>

#endif /* mata_kuliah_hpp */
struct mata_kuliah {
    int id;
    std::string kode;
    std::string nama;
};
void open_matakuliah();
std::vector<mata_kuliah> select_mata_kuliah();
void insert_mata_kuliah(int id, std::string kode, std::string nama);
void update_mata_kuliah(int id, std::string kode, std::string nama);
void delete_mata_kuliah(int id);
mata_kuliah search_mata_kuliah(std::string kode);
int buat_mata_kuliah();
int ubah_mata_kuliah();
int hapus_mata_kuliah();
int cari_mata_kuliah();
int select_mata_kuliah_all();
