#include <iostream>
using namespace std;

// Abstract(soyut) sınıflar


class Kisi{
    public:
    string ad;
    string soyad;
    int maas;

    Kisi(string ad,string soyad,int maas) : ad(ad), soyad(soyad) , maas(maas) { }

    virtual void yazdir()=0; // abstract (soyut metod olustu) imza 

    int hesapla(){

        return maas += maas*1/10;
    }

    void zamYap(){

        cout << ad << "in zamdan sonraki net maasi: " << hesapla() <<  "TL" << endl;

    }
};

class Erkek : public Kisi {

    public:
    Erkek (string ad,string soyad,int maas) : Kisi(ad,soyad,maas) { }
    
    virtual void yazdir(){
        cout << "ad   : " << ad << endl;
        cout << "soyad: " << soyad << endl;
        cout << "maas : " << maas << endl;
        zamYap();

    }
};

class Kadin : public Kisi {

    public:
    Kadin (string ad,string soyad,int maas) : Kisi(ad,soyad,maas) { }

    virtual void yazdir(){
        cout << "ad   : " << ad << endl;
        cout << "soyad: " << soyad << endl;
        cout << "maas : " << maas << endl;
        zamYap();
    }
};


int main(){

Erkek e1("Ahmet","Gunduz",2500);
e1.yazdir();

cout << endl;

Kadin k1("Beyza","su",3445);
k1.yazdir();




return 0; 

}