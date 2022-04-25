// Move Semantic

/*
    -> the rvalue reference= sag tarafta  sabit olanlarin hepsinin tutulabilecegi ayri bir degiskebn tutmak ile ilgilidir.

    -> the rvalue reference and move semantic 

    -> rvalue nin temel amaci bir move constructor ve move assigment operator yaratmaktır.

    -> temel nokta gereksiz copyleri engellemek.


*/

//-------------------------------------------------------------

// example 1

// #include <iostream>

// using namespace std;

// class A{

//     private:

//     public:
        
//         int i;

//         A(){

//             cout << "default constructor" << endl;
//         }
        
//         A(const A &other){

//             cout << "copy consturctor" << endl;
//         }

//         ~A(){

//             cout << "desturctor" << endl;
//         }

//         A &operator=(const A &other){

//             this->i=other.i;
//             cout << "copy assignment operator. " << endl;
//             return *this;
//         }

//         void writeInteger(){

//             cout << "integer valeu : " << i << endl; 
//         }
// };

// int main(){

//     A a;        // default consturctor
//     A b=a;      // copy constructor(farkli degiskenler olusturuyorum.)

//     a.i=5;
//     b=a;
//     a.writeInteger();
//     b.writeInteger();

//     return 0;
// }

//-----------------------------------------------------------------------------------------------

// example 2

// #include <iostream>

// using namespace std;

// class A{

//     private:

//     public:
        
//         int i;
//         string s;
//         A(){

//             cout << "default constructor" << endl;
//         }

//         A(string s){

//             this->s=s;
//         }
        
//         A(const A &other){
            
//             this->i=other.i;
//             cout << "copy consturctor" << endl;
//         }

//         ~A(){

//             cout << "desturctor" << endl;
//         }

//         A &operator=(const A &other){

//             this->i=other.i;
//             cout << "copy assignment operator. " << endl;
//             return *this;
//         }

//         A(A &&other){
//             this->i=other.i;
//             cout << "---move consturctor---" << endl;


//         }

//         A &operator=(A &&other){
//             this->s=other.s;
//             cout << "---move assignment operator---" << endl;
//             return *this;
//         }

//         void writeInteger(){

//             cout << "integer valeu : " << i << endl; 
//         }

//         void writeString(){

//             cout << "String: " << this->s << endl;
//         }
// };

// int main(){

//     // A a;        // default consturctor
//     // A b=a;      // copy constructor(farkli degiskenler olusturuyorum.)

//     A a;
//     a.i=5;

//     A b=move(a); // move constructor

//     b=move(a); // move assignment operator

//     a.writeInteger(); 
//     b.writeInteger();

//     A c=a;  // copy consturctor.
//     c=a;    // copy assignment operator.
//     c=move(a); // move assignment operator.

//     A d("Yusuf");

//     c=move(d);
//     d.writeString();
//     c.writeString();

//     return 0;
// }

//--------------------------------------------------------------------------------------------

// example 3

// #include <iostream>

// using namespace std;

// class A{

//     private:
    
//     public:

//     string s;

//     A() : s("yusuf"){

//         cout << "A default consturctor" << endl;

//     }

//     A(const A &other) : s(other.s){

//         cout << "copy consturctor" << endl;
//     }

//     ~A(){

//         cout << "A destructor" << endl;
//     }

//     //-- Move operation----

//     A(A &&other) : s(move(other.s)){

//         cout << "A move constructor" << endl;
//     }

// };

// class B : public A{

//    private:

//    public:

//    B(){

//        cout << "B default consturctor" << endl;
//    }

//    B(const B &other){

//        cout << "B copy consturctor" << endl;
//    }

//    ~B(){

//        cout << "B desturctor" << endl;
//    }

//    //--- Move operation----

//    B(B &&other){

//        cout << "B move consturctor" << endl;

//    } 

// };

// int main(){

//     // B x1;  // default kuruldu 

//     // B x2=x1; // copy kuruldu

//     B x1;
//     B x2=x1;
//     B x3=move(x2);  // B move constructor

//     cout << "x1 s :" << x1.s << endl;
//     cout << "x2 s :" << x2.s << endl;
//     cout << "x3 s :" << x3.s << endl;

//     return 0;
// }


//--------------------------------------------------------------------------------------------

// example 3

#include <iostream>

using namespace std;

class A{

    private:
    
    public:

    string s;

    A() : s("yusuf"){

        cout << "A default consturctor" << endl;

    }

    A(const A &other) : s(other.s){

        cout << "copy consturctor" << endl;
    }

    ~A(){

        cout << "A destructor" << endl;
    }

    //-- Move operation----

    A(A &&other) : s(move(other.s)){

        cout << "A move constructor" << endl;
    }

};

class B : public A{

   private:

   public:


};

int main(){

    // B x1;  // default kuruldu 

    // B x2=x1; // copy kuruldu

    B x1;
    B x2=x1;
    B x3=move(x2);  // B move constructor

    cout << "x1 s :" << x1.s << endl;
    cout << "x2 s :" << x2.s << endl;
    cout << "x3 s :" << x3.s << endl;

    return 0;
}
    


