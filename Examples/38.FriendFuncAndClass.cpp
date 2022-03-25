#include <iostream>
using namespace std;



class Employee{
    string name;
    int age;
    int salary;

public:
    Employee(string name,int age,int salary){
        this->name=name;
        this->age=age;
        this->salary=salary;
    }
    //friend void showInfos(Employee employee);

    friend class Test;
};

class Test{

public:
    static void showInfos(Employee employee){
        cout << employee.name << " " << employee.age << " " << employee.salary << endl;

    }

};
/*
void showInfos(Employee employee){
    cout << employee.name << " " << employee.age << " " << employee.salary << endl;
}
*/
int main(){

  //  Employee employee("Yusuf CELİK",30,4000);
  //  showInfos(employee);

    Employee employee("Yusuf CELİK",30,4000);

    Test::showInfos(employee);

    return 0;



}