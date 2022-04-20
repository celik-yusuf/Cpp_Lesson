#include <iostream>
using namespace std;

int main(){

    //hata yakalama - istisna firlatma
    // try,catch

    try{

        int s1,s2;

        cout << "sayilar: ";
        cin >> s1 >> s2;
        if(s2==0){
            throw 505;
        }
        int sonuc = s1/s2;
        cout << "sonuc: " << sonuc << endl;

    }
    
    catch(int hataKodu){

        cout << "hatali islem kodu " << hataKodu << endl;


    }
}