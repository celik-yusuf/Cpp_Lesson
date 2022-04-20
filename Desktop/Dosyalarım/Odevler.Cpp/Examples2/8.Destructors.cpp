#include <iostream>

using namespace std;

class Employee{
public:
    Employee(){
        cout << "Constructor Cagirildi " << endl;
    }
    ~Employee(){ // Destructor oluşturma.
        cout << "Destructer çagilirdi." << endl;
    }
};

int main(){

    Employee *emp = new Employee();

    delete emp;

    return 0;
}