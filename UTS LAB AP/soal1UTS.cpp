#include <iostream>
using namespace std;

int main()
{
    int code1,code2,code3;
    bool act1, act2;

    system("cls");
    cout<<"!! SECURITY SYSTEM !!"<<endl;
    cout<<"Kode ke-1 : "; cin>>code1;
    cout<<"Kode ke-2 : "; cin>>code2;
    cout<<"Kode ke-3 : "; cin>>code3;

    if ( code1+code2+code3 >= 200 )
    {
        act1 = true;
    }
    
    if (code1 >= 50)
    {
        if (code2 >= 50)
        {
            if (code3 >= 50)
            {
                act2 = true;
            }
        }
    }

    //requirements
    bool req = act1 & act2;

    if (req)
    {
        cout<<"Aman.";
    }
    else{
        cout<<"Bahaya!";
    }
}