//  Fonksiyon Tanımlama, Fonksiyon Çağrısı ve Parametreli Fonksiyonlar..

#include <iostream>
using namespace std;

void selamla(); // asagida fonk icin prototip yazılır.Asagidaki fonk. calismasi icin.


int main(){  //fonk cagrisini int main altinda yaparsak. Cpp bunu goremez.

    selamla(); // fonk. cagrisi(function call)
 

    return 0;
}
void selamla(){ // ancak burya yazarsak fonk. eger ust tarafta fonk prototipi yazmam gerekir.Yoksa hata alınır.

    cout << "Naber?" << endl;
    cout << "Nasilsin?" << endl;
}
