#include <iostream>
using namespace std;

int main()
{
    string nama;
    int AP,PDS,OS,NIM,rata;

    system("CLS");

    cout<<"Nama Mahasiswa: "; cin>>nama;
    cout<<"NIM : "; cin>>NIM;
    cout<<"Nilai Mata Kuliah: "<<endl;
    cout<<" Algoritma dan Pemrograman: "; cin>>AP;
    cout<<" Probabiitas dan Statistika: "; cin>>PDS;
    cout<<" Sistem Operasi: "; cin>>OS;
    
    if (AP >= 60){
        cout<<"Algoritma dan Pemrograman: Lulus."<<endl;
    }
    else{
        cout<<"Algoritma dan Pemrograman: Tidak Lulus. Silahkan Ulangi di Tahun Depan!"<<endl;
    }

    if (PDS >= 60){
        cout<<"Probabiitas dan Statistika: Lulus."<<endl;
    }
    else{
        cout<<"Probabiitas dan Statistika: Tidak Lulus. Silahkan Ulangi di Tahun Depan!"<<endl;
    }

    if (OS >= 60){
        cout<<"Sistem Operasi: Lulus."<<endl;
    }
    else{
        cout<<"Sistem Operasi: Tidak Lulus. Silahkan Ulangi di Tahun Depan!"<<endl;
    }

    rata = (AP+PDS+OS)/3;
    cout<<"Nilai Rata-rata Semester ini: "<<rata;

}