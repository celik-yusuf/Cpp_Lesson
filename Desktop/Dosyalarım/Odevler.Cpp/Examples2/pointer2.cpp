#include <iostream> 
using namespace std;

int main(){

    int sayi1=10,sayi2=20;
    int *ptr1,*ptr2;

    cout << "sayi1= " << sayi1 << endl;
    cout << "sayi2= " << sayi2 << endl;

    cout << "sayi1 Adres= " << &sayi1 << endl; 
    cout << "sayi2 Adres= " << &sayi2 << endl;

    ptr1=&sayi1;
    ptr2=&sayi2;

    cout << "*ptr1= " << *ptr1 << endl;
    cout << "*ptr2= " << *ptr2 << endl;

    ptr1=ptr2;
    *ptr2=30;

    cout << "*ptr1= " << *ptr1 << endl;
    cout << "*ptr2= " << *ptr2 << endl;

    cout << endl;
    cout << "sayi1= " << sayi1 << endl;
    cout << "sayi2= " << sayi2 << endl;

    ptr1=&sayi1;
    ptr2=ptr1;
    *ptr2=40;

    cout << "*ptr1= " << *ptr1 << endl;
    cout << "*ptr2= " << *ptr2 << endl;

    return 0;
    
}