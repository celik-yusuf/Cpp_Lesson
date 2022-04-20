/*

Auto = Otomatik depolama sinifindan bir degisken bildirir; diger bir deyisle yerel omru olan bir degiskendir. 
       Auto sözcüğü karmaşık bir türü olan bir değişkeni bildirmenin basit bir yoludur.
       Auto ifadesinin template, function pointers ve member pointers lar içeren degiskenler için kullanabiliriz.

Syntax:

auto bildirimci başlatıcısı;

[](auto Param1, auto param2){};


ornekler:

auto a{42}; -> Evrensel başlatma söz dizimi

auto b=0;  -> Atama söz dizimi

auto c= {3.14}; -> yukarıdaki iki tanımı birlestiren evrensel atama.

auto d(1.1434); -> Doğrudan baslatma veya olusturucu stili.

*/

// Exam 1

// #include <iostream>
// using namespace std;
// int main( )
// {
//     int count = 10;
//     int& countRef = count;
//     auto myAuto = countRef;
//     countRef = 11;
//     cout << count << " ";
//     myAuto = 12;
//     cout << count << endl;
// }

//------------------------------------------------------------

// Exam 2

// #include <initializer_list>
// int main()
// {
//     // std::initializer_list<int>
//     auto A = { 1, 2 };
//     // std::initializer_list<int>
//     auto B = { 3 };
//     // int
//     auto C{ 4 };
//     // C3535: cannot deduce type for 'auto' from initializer list'
//     auto D = { 5, 6.7 };
//     // C3518 in a direct-list-initialization context the type for 'auto'
//     // can only be deduced from a single initializer expression
//     auto E{ 8, 9 };
//     return 0;
// }


