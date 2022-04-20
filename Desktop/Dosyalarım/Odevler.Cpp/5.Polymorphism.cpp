#include <iostream>

using namespace std;

class Sekil1{

    public:

    string ad;
    void Ciz(){

        cout << "Sekil ciziliyor..." << endl;
    }
};

class Ucgen : public Sekil1{

    public:
    int k1,k2,k3;
    void Ciz(){

        cout << "Ucgen ciziliyor..." << endl;
    }
    void CevreHesapla(){

        cout << "Cevre Hesapla: " << k1+k2+k3 << endl;
    }

};

class Kare : public Sekil1{

    public:
    int k1;
    void Ciz(){

        cout << "Kare ciziliyor..." << endl;
    }
    void AlanHesapla(){
        cout << "karenin alani: " << k1*k1 << endl;
    }

};

int main(){

    Ucgen u1;
    u1.k1=3;
    u1.k2=4;
    u1.k3=5;
    u1.Ciz();
    u1.CevreHesapla();

    Kare k1;
    k1.k1=10;
    k1.Ciz();
    k1.AlanHesapla();




    return 0;
}