// #include <iostream>
// #include <fstream> // dosyayi hem okur hem yazdırır.

// using namespace std;

// int main(){

//     //ofstream -> dosyaya yazi yazma islemi
//     //ifstream -> dosyadan yazi okuma aiçindir.

//     ofstream yazmaDosyasi;
//     yazmaDosyasi.open("dosya1.txt");


//     yazmaDosyasi << "merhaba Yusuf Nasılsın";
//     yazmaDosyasi << endl << endl;
//     yazmaDosyasi << "iyiyim ";

//     yazmaDosyasi.close();

//     ofstream yazmaDosyasi2("dosya2.txt");
//     yazmaDosyasi2 << "Deneme yazı";
//     yazmaDosyasi2.close();


//     ofstream yazmaDosyasi3("yusuf//dosya3.txt");
//     yazmaDosyasi3 << "Yusuf Celik Fırat Universitesi" << endl;
//     yazmaDosyasi3.close();

//     ofstream yazmaDosyasi4;
//     yazmaDosyasi4.open("//home//ycelik//Desktop//Dosyalarım//Odevler.cpp//Examples2//aaa//bbb//dosya4.txt");
//     yazmaDosyasi4 << "lolololololo";


//     yazmaDosyasi4.close();

//     return 0;


// }

//----------------------------------------------------------------------------------------------------------

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){

//     ifstream okumaDosyasi;
//     string satir;
//     okumaDosyasi.open("dosya1.txt");

//     while(getline(okumaDosyasi,satir)){
        
//         cout << satir << endl;
//     }

//     okumaDosyasi.close();

//     cout << " --------------------" << endl;

//     string kelime;
//     ifstream okumaDosyasi2("dosya2.txt");
//     while(okumaDosyasi2 >> kelime){
        
//         cout << kelime << endl;
//     }

//     okumaDosyasi2.close();

//     ifstream okumaDosyasi3("dosya2.txt");
//     while(!okumaDosyasi3.eof()){
        
//         okumaDosyasi3 >> kelime;
//         cout << kelime << endl;
//     }

//     okumaDosyasi3.close();

//     return 0;
  
// }

//-------------------------------------------------------------------------------

// EXAM

#include <iostream>
#include <fstream>
#include <cstdlib>   // exit(0) icin yazıan kutuphanedir.

using namespace std;

int main(){

    
    ifstream okumaDosyasi("dosya1.txt");

    if(!okumaDosyasi.is_open()){  // is_open dosyanin açılıp açılmadıgını kontrol eder.

        cout << "Dosya acma islemi basarisiz!" << endl;
        exit(0);
    }


    ofstream ciftler("cift.txt");

    if(!ciftler.is_open()){  // is_open dosyanin açılıp açılmadıgını kontrol eder.

        cout << "Dosya acma islemi basarisiz!" << endl;
        exit(0);
    }


    ofstream tekler("tek.txt");


    if(!tekler.is_open()){  // is_open dosyanin açılıp açılmadıgını kontrol eder.

        cout << "Dosya acma islemi basarisiz!" << endl;
        exit(0);
    }

    int sayi;

    while(okumaDosyasi >> sayi){

        if(sayi%2==0){

            ciftler << sayi << " ";
        }

        else{

            tekler << sayi << " ";
        }

        okumaDosyasi.close();
        ciftler.close();
        tekler.close();

    }
    
    return 0;



   
}

