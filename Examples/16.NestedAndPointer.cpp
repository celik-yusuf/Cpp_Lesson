#include <iostream>
using namespace std;

struct Address{

    string cityName;
    int No;
};

struct Employee {
    int id;
    string name;
    string department;
    Address* address; // Adresi pointera donusturduk.

};

int main(){

    Employee employee;
    employee.id=12;
    employee.name="Yusuf Celik";
    employee.department="Bilisim";

    Address adress={"Ankara",5};

    employee.address=&adress;

    Employee* ptr = &employee;

    cout << ptr->address->cityName << endl;
    cout << ptr->address->No << endl;


    return 0;
}