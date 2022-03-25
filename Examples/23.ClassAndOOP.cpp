#include <iostream>
using namespace std;

class Student{
public:
    string name;



};

int main(){

    Student student1;
    Student student2;

    student1.name="Mahmut CELİK";
    student2.name= "Yusuf CELİK";

    cout << "Öğrenci 1 ismi: " << student1.name << endl;
    cout << "Öğrenci 2 ismi: " << student2.name << endl;

    return 0;
}