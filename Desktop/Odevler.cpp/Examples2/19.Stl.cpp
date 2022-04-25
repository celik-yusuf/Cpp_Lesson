/*
    STL in 4 bileşeni vardır.(STL has four components)

    1)Algorithms
    2)Containers
    3)Functions
    4)Iterators


    1)Algorithm:
     -> Sorting
     -> Searching
     -> Important STL Algortihm
     ->useful Array alggorithms
     ->partition Operations

    --> Numeric:
        -> valarray class
    

    2) Containers: Conteniners veya container sınıfları, nesneleri ve verileri depolar.

    -->Sequence Containers: sıralı bir şekilde erişilebilen veri yapılarını uygular.
        ->vector
        ->list
        ->deque
        ->arrays
        ->forward_list(C++ 11)
    
    -->Container Adaptors: sıralı konteynerler için farklı bir arayüz sağlar.
        -> Queue
        ->priority_queue
        ->stack
    
    -->Associative Containers:  hızlı bir şekilde aranabilen sıralanmış veri yapılarını uygular ( O(log n) karmaşıklığı)
        ->set
        ->multiset
        ->map
        ->multimap
    
    -->Unordered Assoclative: Hızlı bir şekilde aranabilen sırasız veri yapılarını uygular.
        ->unordered_set
        ->unordered_multiset
        ->unordered_map
        ->unordered_multimap
*/


//---------------------------------------------------------------------------------------------------------

// Template(Şablon Yapısı):

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
/*

Vektör= Vektörler, bir öğe eklendiğinde veya silindiğinde kendini otomatik olarak yeniden boyutlandırma yeteneğine sahip dinamik dizilerle aynıdır ve depolamaları kapsayıcı tarafından otomatik olarak işlenir.
        Vektör öğeleri, itertorler kullanılarak erişilip üzerinden geçilebilmesi için bitişik depoya yerleştirilir. Vektörlerde, veriler sona eklenir. Sona ekleme, bazen diziyi genişletme ihtiyacı olabileceğinden, farklı 
        zaman alır. Yeniden boyutlandırma olmadığı için son öğeyi kaldırmak yalnızca sabit bir zaman alır. Başta veya ortada ekleme ve silme, zaman içinde doğrusaldır.

*/


// Exam1

// #include <iostream>
// #include <vector>
// using namespace std;

// template  <typename T>
// void print(vector<T>& v){
    
//     typename vector<int>::iterator i=v.begin(); // iterator islemleri
//     while(i != v.end())
//         cout << *i++ << " ";
//         cout << endl;
// }


// int main(){

//     vector<int> v;
//     vector<int> v1(5,10); // 5 tane 10 belirttik.
//     vector<int> v2(10); // 10 elemeana sahip.
//     vector<int> v3(&v2[5],&v2[8]); // v2 nin 5. elemanı ve v2 nin 8 elemanına kadar kopyala.
//     vector<int> v4(v1);

//     print(v);
//     print(v1);
//     print(v2);
//     print(v3);
//     print(v4);

// }

//------------------------------------------------------------------------------------------------------

// Exam2

// #include <iostream>
// #include <vector>
// using namespace std;

// template  <typename T>
// void print(vector<T>& v){
    
//     typename vector<int>::iterator i=v.begin(); // iterator islemleri
//     while(i != v.end())
//         cout << *i++ << " ";
//         cout << endl;
// }


// int main(){

//     vector<int> v6;
//     v6.insert(v6.begin(),5); // insert methodu istedigimiz sayiyi ekler.
//     v6.insert(v6.end(),10);
//     v6.insert(v6.begin(),7);
//     v6.push_back(88);  // push back methodu her zaman sona ekler.
//     print(v6);
//     v6.pop_back(); // sondaki elemenı siler.
//     print(v6);

//     //cout << v6.empty() << endl; // vektorun bos olup olamadıgını kontrol eden method.

//     cout << *v6.begin() << endl; // pointer kullanarak deger getirme..
//     cout << *v6.end() << endl; 

//     cout << v6.front() << endl; // ilk degeri verir front
//     cout << v6.back() << endl;

//     v6.erase(v6.begin()+1,v6.end()-1);  // ilk elemenaı atla son elemanı da atla.
//     print(v6);
//     //v6.clear(); // vektorun tamamıni sil.
//     print(v6);
//     v6.push_back(67);
//     v6.push_back(78);
//     v6.push_back(11);
//     print(v6);    
//     cout << v6.size() << endl; // vektor boyutunu verir.
//     cout << v6.capacity() << endl; // vektorun kaapsitesini verir.
//     cout << "-------------------------------------------------------" << endl;

//     vector<int> v7;
//     for(int i=0;i<10;i++)
//         v7.push_back(i*2);
//     print(v7);

//     cout << "---------------------------------------------------------------------"<< endl;

//     v6.insert(v6.begin(),&v7[2],&v7[5]);

//     print(v6);

//     v6.insert(v6.end()-1,&v7[2],&v7[5]);

//     print(v6);

//     vector<int> v8(&v7[3],&v7[8]);
//     print(v8);


//     v7.swap(v8);
//     print(v7);
//     cout << endl;
//     print(v8);

// }


//----------------------------------------------------------------------------------------------

// List Özellikleri ve Methodları

/*

Listeler= Bitişik olmayan bellek tahsisine izin veren dizi kapsayıcılarıdır . Vektörle karşılaştırıldığında, listenin geçişi yavaştır, 
         ancak bir konum bulunduğunda ekleme ve silme hızlıdır. Normalde bir Liste dediğimizde, çift bağlantılı bir listeden bahsediyoruz. 
         Tek başına bağlantılı bir liste uygulamak için bir ileri liste kullanıyoruz.

*/


// #include <iostream>
// #include <list>   // list sınıfını kullanabilmek için.
// using namespace std;

// template  <typename T>
// void print(T& t){
    
//     typename T::iterator i=t.begin(); // iterator islemleri
//     while(i != t.end())
//         cout << *i++ << " ";
//         cout << endl;
// }

// int main(){


//     list<int> l;  // bos liste
//     list<int> l2(5,6); // 5 tane 6 olsun
//     list<int> l3(10);
//     list<int> l4(l3.begin(),l3.end());  
//     list<int> l5(12);
    
//     print(l);
//     print(l2);
//     print(l3);
//     print(l4);
//     print(l5);

//     cout << l.empty() << endl;
//     cout << l2.empty() << endl;
//     l.begin();
//     l.end();

//     cout << l2.front()<< endl;
//     cout << l2.back() << endl;

//     l2.clear();
//     print(l2);   l2.insert(l2.begin(),5);
//     l2.insert(l2.end(),3);
//     print(l2);
//     l2.push_back(10);
//     print(l2);
//     l2.push_front(1);
//     print(l2);
//     l2.pop_back(); // listeinin sonundan cıkar.
//     print(l2);
//     l2.pop_front();
//     print(l2);

//     //l2.erase(l2.begin(),l2.end());
//     print(l2);

//     cout << l2.size() << endl;
//     l2.push_back(5);
//     l2.push_back(7);
//     l2.push_back(9);
//     l2.push_back(7);
//     print(l2);

//     l2.remove(5);
//     print(l2);

//     list<int> l6;
//     l6.push_back(1);
//     l6.push_back(9);
//     l6.push_back(2);
//     l6.push_back(6);
//     print(l6);
    
//     cout << l2.empty() << endl;

//     l2.insert(l2.begin(),5);
//     l2.insert(l2.end(),3);
//     print(l2);
//     l2.push_back(10);
//     print(l2);
//     l2.push_front(1);
//     print(l2);
//     l2.pop_back(); // listeinin sonundan cıkar.
//     print(l2);
//     l2.pop_front();
//     print(l2);

//     //l2.erase(l2.begin(),l2.end());
//     print(l2);

//     cout << l2.size() << endl;
//     l2.push_back(5);
//     l2.push_back(7);
//     l2.push_back(9);
//     l2.push_back(7);
//     print(l2);

//     l2.remove(5);
//     print(l2);

//     list<int> l6;
//     l6.push_back(1);
//     l6.push_back(9);
//     l6.push_back(2);
//     l6.push_back(6);
//     print(l6);

//     /*
//     //l2.splice(l2.end(),l6); // biribirne eklemekiçin splice.
//     l2.sort();
//     l6.sort();
//     print(l2);
//     print(l6);
    
//     l2.merge(l6);   // sırali listeler için gecerlidir.
//     */

//     print(l2);
//     l2.sort();
//     print(l2);
//     l2.unique();  // benzersiz sekilde listemizi tanımlar.
//     print(l2); 

// }


//---------------------------------------------------------------------------------------------------------

// Queue (Kuyruk) Sınıfı ve Methodları = Kuyruklar, ilk giren ilk çıkar (FIFO) düzenleme türünde çalışan bir tür container adaptorlerdir.


// #include <iostream>
// #include <queue>
// using namespace std;

// template<typename T>
// void print(queue<T>  q){

//     while(!q.empty()){ // kuytuk bos olmadıgı surece islemi devam ettir.

//         cout << q.front()<< " ";
//         q.pop();

//     }
//     cout << endl;

// }

// int main(){

//     queue<int> q;

//     cout << "dolumu bosmu: " <<  q.empty() << endl;
//     q.push(5);
//     q.push(1);
//     q.push(3);
//     cout << q.empty() << endl;
//     cout <<"kutugun ilk elmenani: "<<  q.front() << endl;
//     cout <<"kuyrugun son elmenani: " << q.back() << endl;
//     cout << "Size: " << q.size() << endl;
//     q.pop(); // kuyrugun ilk elemenını sil.
//     cout << q.front() << endl;
//     cout << q.size() << endl;

//     queue <int> q1(q); // kopyalamaa işlemi yapilir.
//     cout << q1.front() << endl;
//     cout << "q1 size: " << q1.size() << endl;
//     q1.pop();
//     cout << "q1 size: " << q1.size() << endl;
//     cout << "q size: " << q.size() << endl;
   
//     print(q);
//     print(q); // referans tanımladıgımız için ikinci printin içi silinir. fonksiyonda refereans dgeçirmeycegiz.
//     cout << q.size() << endl;

//     q.push(11);
//     q.push(12);
//     q.push(19);
//     print(q);

//     q.pop();
//     q.pop();
//     print(q);

//     return 0;
// }

//---------------------------------------------------------------------------------------------------------------------

// Stack(Yığın) Sınıf ve Methodlarr = Yığınlar, bir uçta (üstte) yeni bir öğenin eklendiği ve yalnızca bu uçtan bir öğenin kaldırıldığı LIFO (Son Giren İlk Çıkar) türünde çalışan bir kap adaptör türüdür. 

// #include <iostream>
// #include <stack>
// #include <queue>
// using namespace std;

// // 20 3 5 10

// template <typename T>
// void print(stack<T> s){
//     while(! s.empty()){
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }

// int main(){

    /*

    stack<int> s;

    cout << s.empty() << endl;
    s.push(10);
    s.push(5);
    s.push(3);
    s.push(20);
    cout << s.empty() << endl;

    cout <<"satckın ilk degeri: " <<  s.top() << endl;
    // s.pop();
    cout <<  s.top() << endl;

    cout << "siz: " << s.size() << endl;

    print(s);
    cout << s.size() << endl;

    stack<int> s1(s);
    print(s1);
    s1.pop();
    print(s1);
    print(s);

    */

//--------------------------------------------------------------------------------------------

//    string str="kabuk"; // palindrom kelime ornegi
//    stack<char> s;
//    queue<char> q;
//    for(int i=0;i<str.length();i++){

//        s.push(str[i]);  // bastan ekleme islemleri
//        q.push(str[i]);  // sondan eklme islemleri
    
//     }

//     bool palindrommMu = true;
//     while(! s.empty() and !q.empty()){

//         if(s.top() != q.front()){

//             palindrommMu=false;
//             break;
//         }
//         s.pop();
//         q.pop();
//     }

//     if(palindrommMu){

//         cout << str << " palindromdur" << endl;
//     }
//     else{

//         cout << str << " palindrom degildir" << endl;
//     }

// }

//-------------------------------------------------------------------------------------------

// Priority Queue (Öncelikli Kuyruk) Sınıf Methodları =  kuyruğun her öğesinin bir önceliğe sahip olduğunu görebiliriz {sabit sipariş} g,b, dusunulebilir. önceliğe göre dinamik hesap yaparak elemanı uygun sıraya ekler. Kuyrugun her zaman basından cıkarır.

#include <iostream>
#include <queue> 
#include <stdlib.h> // rastgele sayi tutturabilmek için
#include <time.h> //  her zaman farklı bir sayi tutmak için
using namespace std;


template<typename T>
void print(T t){
    while(!t.empty()){
        cout << t.top() << " ";
        t.pop();
    }
    cout << endl;
}

template<typename T>
bool cmp(T x,T y){
    return x>y;
}

int main()
{
    srand(time(0)); // her zaman farklı degerler tutulsun
    priority_queue<int> p;    // oncelikli kuytruk bos olarak olustu.
    cout << p.empty() << endl; // bos oup olmadıgını kontrol et
    p.push(5);
    print(p);
    p.push(3);
    print(p);
    p.push(11);
    print(p);
    p.push(7);
    print(p);
    p.push(4);
    print(p);
    cout << p.empty() << endl;
    cout << p.top() << endl;

    cout << "P2 container icerigi" << endl;
    priority_queue<int,vector<int>,bool(*)(int,int)> p2(cmp);
    p2.push(5);
    print(p2);
    p2.push(3);
    print(p2);
    p2.push(11);
    print(p2);
    p2.push(7);
    print(p2);
    p2.push(4);
    print(p2);

    vector<int> v;
    int rast;
    for(int i=0;i<10;i++){
        v.push_back(rand() % 100);
        cout << rast << " ";
        v.push_back(rast);

    }
    priority_queue<int,vector<int>,bool(*)(int,int)> p3(v.begin(),v.end(),cmp);
    cout << endl;
    print(p3);


    return 0;

}





