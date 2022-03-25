#include <iostream>
using namespace std;

void factoriyel(int sayi){ // factoriyel fonk. olusturduk ve icine tamsayi atadik.

    int fak=1;
    for (int i=2;i<=sayi;i++){

        fak*=i;

    }
    cout << "faktoriyel: " << fak << endl;

}


int main(){

    int a;
    cout << "sayiyi giriniz: ";
    cin >> a;

    factoriyel(a);



}