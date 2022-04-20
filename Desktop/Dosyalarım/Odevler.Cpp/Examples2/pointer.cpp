#include <iostream>

using namespace std;


int main(){

    int sayi;
    sayi=10;

    cout << "sayi=" << sayi << endl;
    cout << "sayi adres= " << &sayi << endl;
    

    int *sayiPtr;

    sayiPtr=&sayi;

    cout << "sayiPtr= " << sayiPtr << endl;
    cout << "sayiPtr in işaret ettigi yer= " << *sayiPtr << endl;

    return 0;
    


}