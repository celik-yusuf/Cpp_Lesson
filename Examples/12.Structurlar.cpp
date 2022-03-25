//aslında objedirler ve bircok ozelligi gruplamamizi saglar.

#include <iostream>
using namespace std;

struct Employee { // Employee(Calisan)
    int id;
    string name;
    string department;
};

int main(){

    /*

    Employee employee1={12,"YUsuf Celik","Bilisim"}; // Degerlerini daha sonra da verebiliriz.Asagidaki gibi..

    cout << employee1.name << endl;
    
    employee1.name="Mahmut Celik";

    cout << employee1.name << endl;

    */

    Employee employee1;

    employee1.id=12;
    employee1.name="Yusuf Celik";
    employee1.department=">Bilisim";

    cout << employee1.id << endl;
    cout << employee1.name << endl;

    return 0;

}


