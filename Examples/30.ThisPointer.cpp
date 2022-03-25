#include <iostream>
using namespace std;

class Employee{

    private:
        string name;
        int salary;
        int id;
        
      
    public:

        Employee(string name,int salary,int id){ // Constracturs
            this->name=name;
            this->salary=salary;
            this->id=id;
        }

        void setSalary(int salary){
            this->salary=salary;
        }
        int getSalary(){
            return salary;
        }

        void setName(string name){
            this->name=name;
        }
        string getName(){
            return name;
        }
        void showInfos(){
            cout << "İsim: " << this->name << endl;
            cout << "Maas: " << this->salary << endl;
            cout << "İd: " << this->id << endl;

        }
 
};

int main(){

    Employee employee("Yusuf CELİK",3000,12);
    employee.showInfos();




    return 0;
}