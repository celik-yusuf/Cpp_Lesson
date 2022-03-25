/*

#include <iostream>
using namespace std;

int main(){

    int array[]={1,2,3,4};
    cout << array << endl;  // Adres degeri olarak karsimiza cikar.
    cout << array +1 << endl; // Adres degerimiz 4 bayt artar cunku degerlerimiz int tir. ve intler 4 bayt yer kaplar.

    cout << array +2 << endl;
    return 0;
}

*/

/*
#include <iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4};

    int *ptr = array;
    cout << ptr << endl;
    
    ptr=ptr+1;
    cout << "pointerin yeni degeri: " << ptr << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main(){

    int array[] = {1,2,3,4};

    int *ptr = &array[2]; // 2. indexsin adresini almak icin bu sekilde yazariz.

    cout << ptr << endl;
    return 0;
}

*/

#include <iostream>
using namespace std;

int main(){

    string array[]={"Yusuf","Celik","Cpp"};

    string *ptr=array;

    cout << ptr << endl;
    cout << ptr+1 << endl; // Burada arrayin 1. indexsindeki celik in adresini aliriz.
    cout << *(ptr+1) << endl; // Burada ise celik in indexsinin kendisini aliriz.
    cout << ptr[1] << endl; // bir ustteki ile ayni ciktiyi aliriz genellikle boyle kullanılir.
    return 0;
}
