#include <iostream>

using namespace std;

class Employee{
public:

    string s;
    int i;


    Employee(string &str,int &ivalue){
        
        // this->s = new string;

        // this->i = new int;

        this->s=str;
        this->i=ivalue;
        
    }
    void show(){
        cout<< "String Deger: " << this->s << ", int Deger: " << this->i << endl;
    }

    ~Employee(){ // Destructor oluşturma.

        // delete this->s;
        // delete this->i;

        cout << "Destructer cagirildi." << endl;
    }
};

int main(){

    string a="yusudff";
    int b=12;

    Employee emp(a,b);
    emp.show();

    return 0;
}