#include <iostream>
using namespace std;

int toplama(int a,int b,int c){ //toplama seklinde bir fonk. olusturduk.
    
    return a+b+c; // ben buraya int,str vs. ne dondureceksem onun degiskenini yukarda fonksiyonu int dondurmemiz lazım.
    cout << "deneme" << endl; // return altındaki kodlar calısmaz.Bu kod calismaz.Ama return ustune yazarsak calisir.


}

int main(){

    int a=toplama(1,2,3);

    cout << "a: " << a << endl;


}