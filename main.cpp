//
//  main.cpp
//  final_exam
//
//  Created by Sony Wibisono on 14/03/21.
//

#include <iostream>
#include "mata_kuliah.hpp"
#include "mahasiswa.hpp"
//#include "nilai.hpp"

using namespace std;
int menu;
char submenu;
int menu_siswa() {
    do {
        cout << "Menu Data Siswa" << endl;
        cout << "===============" << endl;
        cout << "c) Buat Data Siswa " << endl;
        cout << "r) Mencari Data siswa" << endl;
        cout << "u) Update Data Siswa " << endl;
        cout << "d) Hapus Data Siswa " << endl;
        cout << "x) ke Menu Utama " << endl;
        cin >> submenu;
        cout << endl;
        switch(submenu){
            case 'r':
                select_siswa_all();
                return 0;
            case 'c':
                buat_siswa();
                return 0;
            case 'u':
                ubah_siswa();
                return 0;
            case 'd':
                hapus_siswa();
                return 0;
            case 's':
                cari_siswa();
                return 0;
            default:
            return 2;
        }
    } while (submenu !='x');
    
}
int menu_matakuliah() {
    do {
        cout << "Menu Mata Kuliah" << endl;
        cout << "================" << endl;
        cout << "c) Buat Mata Kuliah " << endl;
        cout << "r) Tampilkan Semua" << endl;
        cout << "u) Update Mata Kuliah " << endl;
        cout << "d) Hapus Mata Kuliah " << endl;
        cout << "s) Mencari Mata Kuliah" << endl;
        cout << "x) ke Menu Utama " << endl;
        cin >> submenu;
        cout << endl;
        switch(submenu){
            case 'r':
                select_mata_kuliah_all();
                return 0;
            case 'c':
                buat_mata_kuliah();
                return 0;
            case 'u':
                ubah_mata_kuliah();
                return 0;
            case 'd':
                hapus_mata_kuliah();
                return 0;
            case 's':
                cari_mata_kuliah();
                return 0;
            default:
            return 2;
        }
    } while (submenu!='x');
    
}
int menu_nilai(){
    do {
        cout << "Menu Nilai Mahasiswa" << endl;
        cout << "====================" << endl;
        cout << "c) Entri Nilai " << endl;
        cout << "r) Mencari Nilai" << endl;
        cout << "u) Update Nilai " << endl;
        cout << "d) Hapus Nilai " << endl;
        cout << "x) ke Menu Utama " << endl;
        cin >> submenu;
        cout << endl;
        switch(submenu){
            case 'r':
                select_mata_kuliah_all();
                return 0;
            case 'c':
                buat_mata_kuliah();
                return 0;
            case 'u':
                ubah_mata_kuliah();
                return 0;
            case 'd':
                hapus_mata_kuliah();
                return 0;
            case 's':
                cari_mata_kuliah();
                return 0;
            default:
            return 2;
        }
    } while (submenu!='x');
    
}
int main(int argc, const char * argv[]) {
    do {
        cout << "Menu Nilai : " << endl;
        cout << "1) Data Siswa " << endl;
        cout << "2) Data Mata Kuliah " << endl;
        cout << "3) Data Nilai " << endl;
        cout << "0) Keluar " << endl;
        cin >> menu;
        switch(menu){
            case 1:
            menu_siswa();
            break;
            case 2:
            menu_matakuliah();
            break;
            case 3:
            menu_nilai();
            break;
            default:
            return 0;
        }
    } while (menu!=0);
    return 0;
}
