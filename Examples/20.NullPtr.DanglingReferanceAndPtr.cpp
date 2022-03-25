#include <iostream>
using namespace std;

int main(){

    int *ptr1 = nullptr; // pointerimiz bellekte herhangi bir yeri gostermiyor.

    int *ptr2 = nullptr;

    ptr1 = new int;

    *ptr1 = 10;

    ptr2=ptr1;

    delete ptr1;

    *ptr2=20; // bu satirir yazarsak derleme hatasi aliriz.Dangling Referance hatasidir.

    return 0;
}