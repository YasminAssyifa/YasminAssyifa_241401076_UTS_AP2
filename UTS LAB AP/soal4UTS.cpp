#include <iostream>
using namespace std;

int main()
{
    string daftar;
    int total;
    bool buku = false;

    system("CLS");
    cout<<"Masukkan daftarjudul Buku: "; getline(cin, daftar);

    int i = 0;
    while (i < daftar.length())
    {
        if (daftar[i] != ' ')
        {
            if (!buku)
            {
                total++;
                buku = true;
            }
        }
        else
        {
            buku = false;
        }
        i++;
    }

    cout<<"Jumlah judul buku : "<< total;
} 