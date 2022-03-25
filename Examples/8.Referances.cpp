/*
#include <iostream>
using namespace std;

int main(){

    int a=10;

    int &ref = a; // ampersan isareti(&) bir adres belirtmez degiskenin referansini alir sadece.

    ref++;

    cout << "a nin degeri: " << a << endl; // a ya ref atadigimiz icin.

    return 0;
}
*/

#include <iostream>
using namespace std;
void degerDegistir(int &ref){
    ref = 20;
}

int main(){

    int a=10;

    cout << "a nin degeri: " << a << endl;

    degerDegistir(a); // fonk. cagirdigimiz icin a nin yeni degeri ref'e esit olur.

    cout << "a nin yeni dedgeri: " << a << endl;
    


    return 0;

}