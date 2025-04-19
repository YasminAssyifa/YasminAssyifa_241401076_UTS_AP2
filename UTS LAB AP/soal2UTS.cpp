#include <iostream>
using namespace std;

int main()
{
    int x, pass, angka1, angka2, angka3;

    system("CLS");
    cout<<"Masukkan kode 3 digit: "; cin>>pass;

    if (pass>= 100 && pass<=999)
    {
        angka1 = pass / 100;
        angka2 = (pass % 100) / 10;
        angka3 = (pass % 100) % 10;
        cout<<"Jumlah digit : "<<angka1+angka2+angka3;
    }
    else
    {
        cout<< "Kode Salah!";
    }

}