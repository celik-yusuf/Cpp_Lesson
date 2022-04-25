/*

decltype= tür belirleyicisi belirtilen ifadenin türünü verir.

Syntax 

decltype(ifade)



*/

#include <bits/stdc++.h>
using namespace std;
 
int fun1() { return 10; }
char fun2() { return 'g'; }

int main()
{
    // Data type of x is same as return type of fun1()
    // and type of y is same as return type of fun2()
    decltype(fun1()) x;
    decltype(fun2()) y;
    auto z(12.45);


 
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;

    int t=5;

    decltype(t) j=t+5;
    cout << typeid(j).name() << endl;
 
    return 0;
}