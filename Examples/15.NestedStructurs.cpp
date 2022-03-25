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
    Address address;

};

int main(){

    Employee employee={12,"Yusuf Celik","Bilisim",{"İstanbul",5}};

    // Bu sekilde de tanimlayabiliriz.
    employee.id=12;
    employee.name="Yusuf Celik";
    employee.department="Bilisim";
    //employee.address={"Anakara",5}; // bu sekilde de asagıdaki gibide verilebilir.
    employee.address.cityName="Ankara";
    employee.address.No=5;

    
    // Asagidaki gibi de tanimlayabiliriz.
    /*
    cout << employee.id << endl;
    cout << employee.name << endl;
    cout << employee.department << endl;
    cout << employee.address.cityName << endl;
    cout << employee.address.No << endl; // nokta operatoru ile yazariz. 
    */


    return 0;
}
