#include <iostream>

using namespace std;

class Araba{  //base

    public:

    string marka;
    int model;
    int fiyat;
    
    void Calistir(){

        cout << marka << "Arabasi Calisti..." << endl;
    }

};

class Toyota : public Araba{

    public:
    string klima;
   


};

class Mercedes : public Araba{

    public:
    string abs;
   
};

int main(){

    Toyota t1;
    t1.marka="toyotaa ";
    Mercedes m1;
    m1.marka="mercedess  ";
    
    t1.klima="klimasi vardir.";
    m1.abs="abs sistemi son modeldir.";
    
    t1.Calistir();
    m1.Calistir();

    return 0;
}