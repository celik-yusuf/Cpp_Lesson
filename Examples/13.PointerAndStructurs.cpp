#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;

};

int main(){

    Employee employee1={12,"Yusuf Celik","Bilisim"};

    Employee* ptr = &employee1;

    cout << employee1.name << endl; // obje uzerinden ulasma.

    cout << ptr->department << endl; // pointer uzerinden ulasma

    return 0;
    
}