#include <iostream>
using namespace std;

class Test{

private:
    int a;

public:
    Test(int a){
        this->a=a;
    }
    void test(){
        cout << "Test Methodu" << endl;
    }
    int getValue()const { // bu method herhangi bir degeri degistiremez.Const olamayan methodlari cagiramaz.
        return this->a;
    }
};


int main(){

    Test test1(10);
    cout << test1.getValue() << endl;

    return 0;
}