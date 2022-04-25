#include <iostream>
using namespace std;

class Araba{

    public:

    int sayi;

    Araba(int a){ // yapici methodu void altina bile yazrsak once yapici method calisir.

    int sonuc = a/2;
        cout << "yapici method calisti..." << endl;
        cout << "yapici methodun yarisi.." << sonuc << endl;
    }

    void Method2(){

        cout << "kendi methodum..." << endl;
        cout << "sayinin iki kati: " << sayi*2 << endl;
    }


};


int main(){

    // yapıcı methodlar : constructor

    //Araba n1; // nesneyi olusturmamiz Araba methodunu cagirmamiz icin yeterli
    Araba n1(20);

    n1.sayi=15;
    n1.Method2(); // nesne ile methodu cagirmamiz gerekiyor method2 icin.
    

    return 0;
}