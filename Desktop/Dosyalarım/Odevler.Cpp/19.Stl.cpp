//  STL bileşenleri

/*

-> Algoritma

-> Kap(Container) = Nesneleri depolamak ve yönetmekten sorumludur.

        Lineer Kaplar: Vevtor,Deque,List
        Asosyatif Kaplar: Set,Map,Multi-set,Multi-map

-> Yineleyici(Iterator): Algoritma farklı tipte kaplarla çalışmasını sağlayacak şekilde erişimi soyutlar.

*/

//--------------------------------------------------------------------------------------------------------------


// #include <iostream>
// using namespace std;

// template <typename T> // istedigimiz paratmetreyi calıstırmak için template kullanabiliriz.

// T kare(T deger){

//     return deger*deger;
// }


// int main(){

//     cout << kare(5.56) << endl;
// }


//-------------------------------------------------------------------------------------------------------

// Vektör Sınıfı Ve Methodları

#include <iostream>
#include <vector>
using namespace std;



int main(){

    vector<int> v;
    vector<int> v1(5,10); // 5 tane 10 belirttik.
    vector<int> v2(10); // 10 elemeana sahip.
    vector<int> v3(&v2[5],&v2[8]); // v2 nin 5. elemanı ve v2 nin 8 elemanına kadar kopyala.
    vector<int> v4(v1);


}



