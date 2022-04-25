// // Assignment Operator

// Copy Assignment= Verilere sahip bir nesnenin başka bir nesne ile değişimi diyebiliriz bunu atama operatoru ile yapar.

// #include <iostream>
// #include <string>

// using std::cout;
// using std::endl;

// class Foo
// {
//   public:
//     int data;
//     Foo(int data)
//     {
//         this->data = data;    
//     }
//     ~Foo(){};
    
//     Foo& operator=(const Foo& rhs) // atama operatoru.
//     {
//         data = rhs.data; 
//         return *this;
//     }

   
// };

// int main()
// {
//    Foo foo(2); //Foo(int data) called
//    Foo foo2(42);
//    foo2 = foo; // Assignment Operator Called
//    cout << foo2.data << endl; //Prints 42
// }

// -----------------------------------------------------------------------------------------------------

// Copy vs Assignment Constructor
#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Foo
{
  public:
    Foo(int data)
    {
        this->data = data;    
    }
    ~Foo(){};
    Foo(const Foo& rhs)
    {
            data = rhs.data; 
    }

    Foo& operator=(const Foo& rhs)
    {
        // data = rhs.data; 
        return *this;
    }

    int data;
};

int main()
{
   Foo foo(2); //Foo(int data) / Normal Constructor called
   Foo foo2 = foo; //Copy Constructor Called
   cout << foo2.data << endl;

   Foo foo3(42);
   foo3=foo; //Assignment Constructor Called
   cout << foo3.data << endl;
}
