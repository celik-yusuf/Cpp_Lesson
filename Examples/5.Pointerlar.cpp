#include <iostream>
using namespace std;

int main(){

    int a=5; 

    int *ptr = &a; // burada pointer olusturup a nin adres degerini atamak icin ampersa(&) kullanırız.

    cout << "Degiskenin Adresi: " << &a << endl; // Degiskenin adresini yazdirir.
    cout << "Degiskenin Adresi: " << ptr << endl; // Ayni sekilde adresi yazdirir.

    cout << "Degiskenin Degeri: " << *ptr << endl; // a degiskeninin bellekteki degerini yazdır.

    *ptr = 6;

    cout << "Degiskenin yeni degeri: " << a << endl;
 
    return 0;
    
}