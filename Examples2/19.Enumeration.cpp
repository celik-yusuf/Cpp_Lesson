//Enumeration = Numaralandırma

// Enum =  Sabit bir değer aralığına sahip yeni veri türü oluşturmamıza olanak tanıyan kullanıcı tanımlı bir veri türüdür(yapıdır.).



//-------------------------------------------------------------------------------------------

// #include <iostream>

// enum renk{ sari=4,kirmizi,mavi,lacivert,mor,beyaz,siyah };

// using namespace std;

// int main(){

//     renk r1,r2;

//     r1=kirmizi;
//     r2=beyaz;

//     if(r1==kirmizi){

//         cout << "Kirmizi" << endl;
//     }
    
//     else if(r1==mavi){

//         cout << "mavi" << endl;
//     }


//     cout << r1 << endl;


//     return 0;

// }

//-----------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// enum myEnum
// {
//     enumName1 = 1, 
//     enumName2 = 2, 
//     enumName3,     
//     enumName4 = 7, 
//     enumName5,   
//     enumName6 = 5, 
//     enumName7 = 3,
//     enumName8 = enumName4 + 2
// };


// int main(){

//     cout << enumName1 << endl;
//     cout << enumName5 << endl;
//     cout << enumName6 << endl;
//     cout << enumName8 << endl;
// }

//--------------------------------------------------------------------------------


// #include <iostream>

// using namespace std;

// int main()
// {
// cout << "Difficulty Levels\n\n";
// cout << "1 - Easy\n";
// cout << "2 - Normal\n";
// cout << "3 - Hard\n\n";

// enum level {easy = 1, normal, hard};
// int choice;

// cout << "Choice: ";
// cin >> choice;

// switch (choice)
// {
// case easy:
// cout << "You picked Easy." << endl;
// break;
// case normal:
// cout << "You picked Normal." << endl;
// break;
// case hard:
// cout << "You picked Hard." << endl;
// break;
// default:
// cout << "You made an illegal choice." << endl;
// }

// cout << "Press ENTER to continue...";

// system("pause");

// return 0;
// }

//-----------------------------------------------------------------------------------

