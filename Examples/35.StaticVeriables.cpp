#include <iostream>
using namespace std;

void Test(){
    
    static int i=3; // degeri teker teker bir arttirir.
    i++;
    cout << "i nin degeri: " << i << endl;
}

int main(){

    Test();
    Test();
    Test();
    
    return 0;


}