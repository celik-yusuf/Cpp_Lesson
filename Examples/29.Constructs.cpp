#include <iostream>
using namespace std;

class Employee{

    private:
        string name;
        int salary;
        int id;
        string address;
        
      
    public:

        Employee(string isim,int maas,int kimlik,string address){ // Constracturs
            name=isim;
            salary=maas;
            id=kimlik;
            this->address=address;
            
        }

        void setSalary(char maas){}
        void setSalary(int maas){
            salary=maas;
        }
        int getSalary(){
            return salary;
        }

        void setName(string isim){
            name=isim;
        }
        string getName(){
            return name;
        }
        void showInfos(){
            cout << "İsim: " << name << endl;
            cout << "Maas: " << salary << endl;
            cout << "İd: " << id << endl;
            cout << "adress: " << address << endl;

        }
 
};

int main(){

    Employee sss("Yusuf CELİK",3000,12,"dasfaea");
    sss.showInfos();

    Employee *aaa = new Employee("Yusuf aaa",3000,12,"efskjhefs");

    aaa->showInfos();

    aaa->setSalary('a');


    return 0;
}