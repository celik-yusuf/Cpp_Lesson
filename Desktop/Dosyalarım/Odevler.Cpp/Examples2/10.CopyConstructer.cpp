
// // Copy Constructor= Var olan bir nesneyi başka bir nesneye kopyalamak.
// #include <iostream>

// using namespace std;

// class Myclass {
// public:
//     Myclass() {
//         cout << "default constructor" << endl;
//     }

//     Myclass(const Myclass &r)
//     {
//         cout << "copy constructor" << endl;
//     }

// };


// int main()
// {
//     Myclass m1;         // default constructor
//     Myclass m2{m1};   // C++11 - copy constructor
//     Myclass m3 = m1;   // C++03 - copy constructor
//     Myclass m4(m1);   // C++03 - copy constructor


//     return 0;
// }

//-----------------------------------------------------------------

// #include <iostream>

// using namespace std;

// class Myclass {
// public:
//     Myclass() {
//         cout << "default constructor" << endl;
//         cout << "this  = " << this << endl;
//     }

//     Myclass(const Myclass &r)
//     {
//         cout << "***********************************" << endl;
//         cout << "copy constructor" << endl;
//         cout << "this  = " << this << endl;
//         cout << "&r    = " << &r << endl;
//         cout << "***********************************" << endl;
//     }

// };

// int main()
// {
//     Myclass m1;
//     Myclass m2{m1};   //C++11

//     cout << "&m1  = " << &m1 << endl;
//     cout << "&m2  = " << &m2 << endl;



//     return 0;
// }
//----------------------------------------------------------------------------
// senaryo 2.

// #include <iostream>

// using namespace std;

// class Myclass {
// public:
//     Myclass() {
//         cout << "default constructor" << endl;
//     }

//     Myclass(const Myclass &r)
//     {
//         cout << "***********************************" << endl;
//         cout << "copy constructor" << endl;
//         cout << "this = " << this << endl;
//         cout << "&r = " << &r << endl;
//         cout << "***********************************" << endl;
//     }

// };


// void gfunc(Myclass m)
// {
//     cout << "gfunc cagrildi" << endl;
//     cout << "&m = " << &m << endl;
//     cout << "---------------------------------------------" << endl;

// }


// int main()
// {
//     Myclass m1;

//     cout << "&m1 = " << &m1 << endl;
//     gfunc(m1);


//     return 0;
// }

//------------------------------------------------------------------------

// 3. Senaryo

#include <iostream>

using namespace std;

class Myclass {
public:
    Myclass() {
        cout << "default constructor" << endl;
    }

    ~Myclass() {
        cout << "destructor" << endl;
    }

    Myclass(const Myclass &r)
    {
        cout << "***********************************" << endl;
        cout << "copy constructor" << endl;
        cout << "***********************************" << endl;
    }

};


Myclass g;

Myclass gfunc()
{
    return g;
}


int main()
{
    cout << "main basliyor" << endl;
    gfunc();
    cout << "main bitiyor" << endl;

    return 0;
}





