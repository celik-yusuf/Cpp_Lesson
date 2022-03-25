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
            cout << "İd: " << this->id << endl;

        }
 
};
void deneme(Employee* ptr){
    ptr->showInfos();

}

int main(){

    Employee employee("Yusuf CELİK",2000,12);

    deneme(&employee);

    return 0;
}