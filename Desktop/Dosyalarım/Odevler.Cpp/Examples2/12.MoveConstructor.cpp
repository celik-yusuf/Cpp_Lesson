#include <iostream>
using namespace std;

class Wallet {
public:
    int nrOfDollars;
    
    Wallet() = default; //default ctor

    Wallet(Wallet &&other) {
        this->nrOfDollars = other.nrOfDollars;
        other.nrOfDollars = 5;
    }
};

int main(){

    Wallet a;
    a.nrOfDollars = 1;
    Wallet b (std::move(a)); //calling B(B&& other);
    std::cout << a.nrOfDollars << std::endl; //0
    std::cout << b.nrOfDollars << std::endl; //1
}