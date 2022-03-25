/*

// Colbay value

#include <iostream>
using namespace std;

void degerDegistir(int af){
    af=20;
    cout << "Fonksiyon icindeki deger: " << af << endl;
}

int main(){

    int a=10;
    cout << "a degiskeninin degeri: " << a <<  endl;
    degerDegistir(a);
    cout << "Fonksiyon bittikten sonra a degiskenin degeri: " << a << endl;

    return 0;
}

*/

#include <iostream>
using namespace std;

void degerDegistir(int *ptr){

    *ptr=20;
    cout << "Fonksiyon icindeki deger: " << *ptr << endl;

}

int main(){

    int a=10;
    cout << "a degiskeninin degeri: " << a << endl;
    degerDegistir(&a);
    cout << "a degiskeninin yeni degeri: " << a << endl;

    
}