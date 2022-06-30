// tugas menghitung luas lingkaran

#include <iostream>
using namespace std;

int main (){
  const float PI = 3.14;                   
  float l, j;

  cout <<"Masukkan nilai Jari-jari : "; cin>>j;
    l = PI * j * j;
  cout <<"Luas Lingkaran : " <<l<<endl;
  
  return 0;
}
