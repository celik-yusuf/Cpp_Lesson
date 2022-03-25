#include <iostream>
using namespace std;

class Urun
{

private:
    int barkod;
    int miktar;
    string adi;

public:
    Urun(int barkod, int miktar, string adi)
    {
        this->barkod = barkod;
        this->miktar = miktar;
        this->adi = adi;
    }

    void setbarkod(int barkod)
    {
        this->barkod = barkod;
    }
    int getbarkod()
    {
        return barkod;
    }

    void setadi(string adi)
    {
        this->adi = adi;
    }
    string getadi()
    {
        return adi;
    }
    void setmiktar()
    {
        this->miktar = miktar;
    }
    int getmiktar()
    {
        return miktar;
    }
    void goster()
    {
        cout << "barkod numarasi: " << barkod << endl;
        cout << "urunun miktari: " << this->miktar << endl;
        cout << "urunun adi: " << adi << endl;
    }

    void ekle(int miktar)
    {
        this->miktar += miktar;
    }
    void cikar(int miktar)
    {

        if (this->miktar<miktar)
        {
            cout << "hatali islem.." << endl;
        }
        else
        {
            this->miktar -= miktar;
        }
    }
};

int main()
{

    /*Urun urun1(12345,100,"Ekmek");
    urun1.goster();
    urun1.cikar();*/

    Urun ekmek(5, 200, "Ekmek");
    ekmek.cikar(400);
    ekmek.goster();
}
