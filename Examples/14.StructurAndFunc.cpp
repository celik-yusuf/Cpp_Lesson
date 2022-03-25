#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;

};

void show(Employee* employee){ // Pointer and function

    employee->id=30;
    cout << "Id: " << employee->id << endl;
    cout << "isim: " << employee->name << endl;
    cout << "Departman: " << employee->department << endl;


}

void showEmployee(Employee employee){ // func and structer 
    
    cout << "Id: " << employee.id << endl;
    cout << "isim: " << employee.name << endl;
    cout << "Departman: " << employee.department << endl;

}

int main(){

    Employee employee1={12,"Yusuf Celik","Bilisim"};
    //showEmployee(employee1);

    cout << employee1.id << endl;

    show(&employee1);

}