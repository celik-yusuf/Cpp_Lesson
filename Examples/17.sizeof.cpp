// sizeof operatoru bir veri yapisinin bellekte ne kadar yer kapaldıgını gosterir.

#include <iostream>
using namespace std;

struct Student {
    int id;
    char letter;

};

int main(){

    cout << "Integer: " << sizeof(int) << endl; // bellekte ne kadar yer kapladigini yazdirir.
    cout << "Char: " << sizeof(char) << endl;
    cout << "Double: " << sizeof(double) << endl;
    cout << "Float: " << sizeof(float) << endl;
    cout << "Student: " << sizeof(Student) << endl;



    return 0;

}
