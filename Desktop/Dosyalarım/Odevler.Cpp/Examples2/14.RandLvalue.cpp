// R value and L value

/* 

lvalue(sol deger) -> bir deger memeory de tutuluyor heapveya stack te bu deger adreslerine ulasabildigimiz degerlerdir.
rvalue ->lvalue olamayan degerlerdir.(non modifiable=modifiye edilemez,temporary=gecici /  degerler)

note= if you can take its address, ,t is probably IValue.=bir ifadenin adresini alabiliyorsanız ve bu  adresi kullanabiliyorsanız bu lvalue dir.


Neden biz lvaue ve r value kullanırız avantajı nedir?=The main advantage is to take a free space!(unnecessary copy=gereksiz kopyalama yapmıyoruz. memory optimization=gereksiz degerler için ayrıca hafızadan yer ayırmamaya calısıyoruz.)

*/

// example 1

// #include <iostream>

// using namespace std;

// int main(){
    
//     int i=16; // i: lvalue, 16 : r value
//     int *iptr=&i;

//     i=5,

//     int k=i+55; // k: l value, i+55 rvalue 

//     // int *ki= &(i+55); // error
    
//     return 0;

   
// }

//------------------------------------------------------------------------------------------------

//example2

// #include <iostream>

// using namespace std;

// int main(){

//     int x=5;      // possessing address on RAM location = RAM bolgesinde bir adres bolgesine sahiptir.
//     int &r1=x;   // r : lvalue, x : lvalue, 5 : rvalue  // 5 rvalue dir cunku biz onun adresini alamıyoruz.

//     r1++;
//     r1++;

//     cout << " R :" << r1 << endl; 

//     // int &r2=7; // reference needs to both its address and value, error!. = referans ifadesi adrese ihtiyac duyar. error verir syntax hatası.

//     const int &r3=9; // no syntax rule!= 

//     cout << "R3 address :" << &r3  << endl;
//     cout << "R3 address :" << *(&r3)  << endl;

//     r3++; // r3 sabit oldugu için arttırılmaz. 


//     return 0;
// }

//-------------------------------------------------------------------------------------------------------------------------

// Fonksiyonlar ile rvalue lvalue kavramları

// #include <iostream>

// using namespace std;

// int callFunc(int &a){

//     return a;
// }

// int main(){

//     int i=15;

//     callFunc(i); // there is no syntax error!
//  // callFunc(25); // syntax error. -> lvalue to be assigned rvalue = lvalue ye rvalue atıyoruz. hata verir.

//     return 0;
// }

//------------------------------------------------------------

// example4 


// Rvalue reference and Move semantic 

//  #include <iostream>

// using namespace std;

// int main(){

//     int x;

//     int &r=x;
    
//     const int &r1=15;
    
//     int &&r2=111; // 111 initialization value, r2 reference kept int!, r2 : lvalue, iki tane anpersan && sadee deger tutar hafızadan yer kazandırır hafızanın içindeki cpu nun performansının arttırılması için gereken bişeydir.

//     r2++;
//     r2++;

//     cout << "r2: " << r2 << endl;

//     //int &&r=x;  // syntax error!

//     // int &&r3=r; // syntax error!

//     // int &&r3=r2; // syntax error!

//     // const int &&r3=r2;  // syantax error!

//     return 0;
// }

// ----------------------------------------------------------------------

// example 5

// #include <iostream>

// using namespace std;


// void func(int &r){

//     cout << "lvalue reference:" << r <<  endl;
// }

// void func(int &&r){

//     cout << "rvalue reference:" << r <<  endl;
// }

// int main(){

//     int a=5;

//     func(a);
//     func(12);


//     return 0;
// }

// -----------------------------------------------------------

// example 6

#include <iostream>

using namespace std;

int &sum1(int a, int b){  // sum=toplam
 
    int &result = a+b; // result= sonuc
    return result;   // call by value, constant,literal
}

int main(){

    int a=4;
    int b=12;


    cout << "Rvalue is: " << sum(a,b) << endl;

    a=2;
    b=4;

    int result=sum(a,b); // returns rvalue 
    cout << "Rvalue is: " << result << endl;

    a=3;
    b=7;

    // int &result1=sum(a,b); // returns rvalue, so it is syntax error!

    int &&result2=sum(a,b); // It is okey 

    cout << "Rvalue is: " << result2 << endl;


    a=1;
    b=20;

    const int &result3=sum(a,b); // it is okey, rvalue is found but no problem!

    cout << "Rvalue is: " << result3 << endl;
    

    a=55;
    b=44;

    const int &&result4=sum(a,b);

    cout << "Rvalue is: "  << result4 << endl; 



    a=43;
    b=32;

    int &result5=sum1(a,b);
    cout << "Rvalue is: "  << result5 << endl; 

    return 0;

  
}






