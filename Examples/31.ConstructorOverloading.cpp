#include <iostream>
using namespace std;

class Employee{

    private:
        string name;
        int salary;
        int id;
        
      
    public:
    
        Employee(){
            this->name="Bilgi Yok";
            this->salary=0;
            this->id=0;
        }

        Employee(string name,int salary){
            this->name=name;
            this->salary=salary;
            this->id=0;
        }

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
            cout << "İd: " << this->id << "\n" << endl;

        }
 
};

int main(){

    Employee employee1("Yusuf CELİK",3000,12);
    Employee employee2("Mahmut CELİk",4000);

    Employee employee3; // Bos construct lari bu sekilde cagiririz.

    employee1.showInfos();
    employee2.showInfos();
    employee3.showInfos();

    employee1.setSalary(5203);
    cout << "yeni maas: " <<  employee1.getSalary() << endl;






    return 0;
}