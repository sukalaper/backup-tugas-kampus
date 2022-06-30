// tugas menghitung luas segitiga

#include <iostream>
using namespace std;

int main(){
  int i,k;
  float hasil;

  cout << "Masukkan panjang alas segitiga: ";
  cin >> i;
  cout << "Masukkan tinggi segitiga: ";
  cin >> k;

  hasil = 0.5*i*k;
  cout << "Luas segitiga adalah = " <<hasil<< endl;

  return 0;
}
