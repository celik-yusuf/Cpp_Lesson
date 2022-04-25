#include <iostream>

using namespace std;

void deger_goster(int id) {
  cout << "int değişken değeri: " << id << endl;
}

void deger_goster(float fd) {
  cout << "float değişken değeri: " << fd << endl;
}

void deger_goster(char const *cp) {
  cout << "Karakter dizisi değeri: " << cp << endl;
}

int main(void) {
  deger_goster(21);
  deger_goster(145.82f);
  deger_goster("Fonksiyon çoklu görev tanımlama işlemi");
	
  return 0;
}