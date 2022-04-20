// Move Semantics: Bir nesneyi diğerine taşımanın bir yoludur. Bunun için eski nesneyi boşaltıyoruz ve sahip oldugu herseyi yeni nesnenin içine yerleştiriyoruz..

// Move assignment = Değerleri bir nesneden var olan baska bir nesneye taşırız.

#include <iostream>

using namespace std;

class A{
    public:
    int a;

    A& operator=(A&& other){

        this->a=other.a;
        other.a=5;
        return *this;
    }
};

int main(){

    A n1;
    n1.a=1;
    A b;
    b=move(n1);

    cout << n1.a << endl;
    cout << b.a << endl;

    
}
